#include "EncryptionHelper.h"

EncryptionHelper::EncryptionHelper(const QString &password)
{
    this->password = password;
}

int EncryptionHelper::EncryWithHMacSha256(const QString &inputData, QString &inputKey, QString &outData)
{
    if (inputData.isEmpty() || inputKey.isEmpty())
    {
        qWarning() << "EncryWithHMacSha256(): the input is invalid.";
        return -1;
    }

    if (TIME_STAMP_LENGTH != inputKey.length())
    {
        qWarning() << "EncryWithHMacSha256(): The length of inputKey is invalid.";
        return -1;
    }

    unsigned int mac_length = 0;
    unsigned int tryTime = 1;
    int lenData = inputData.length();
    long timeTmp = inputKey.toLong();
    unsigned char *temp = HMAC(EVP_sha256(), inputKey.toUtf8().constData(), TIME_STAMP_LENGTH,
                               reinterpret_cast<const unsigned char *>(inputData.toUtf8().constData()), lenData, NULL, &mac_length);

    while (mac_length != SHA256_ENCRYPTION_LENGTH)
    {
        tryTime++;
        if (tryTime > TRY_MAX_TIME)
        {
            qWarning() << "EncryWithHMacSha256(): Encryption failed after max attempts.";
            return -1;
        }

        timeTmp++;
        inputKey = QString::number(timeTmp); // Update inputKey
        temp = HMAC(EVP_sha256(), inputKey.toUtf8().constData(), TIME_STAMP_LENGTH,
                    reinterpret_cast<const unsigned char *>(inputData.toUtf8().constData()), lenData, NULL, &mac_length);
    }

    outData.clear();
    for (unsigned int i = 0; i < mac_length; i++)
    {
        outData.append(QString::number(temp[i], 16).rightJustified(2, '0'));
    }

    return 0;
}
int EncryptionHelper::GetEncryptedPassword(const QString &timestamp, QString &encryptedPwd)
{
    if (password.isEmpty())
    {
        return -1;
    }

    QString timestampStr = timestamp;

    if (timestampStr.length() > TIME_STAMP_LENGTH)
    {
        timestampStr = timestampStr.left(TIME_STAMP_LENGTH);
    }
    else if (timestampStr.length() < TIME_STAMP_LENGTH)
    {
        timestampStr = timestampStr.leftJustified(TIME_STAMP_LENGTH, '0');
    }

    QString temp_encrypted_pwd;
    temp_encrypted_pwd.resize(PASSWORD_ENCRYPT_LENGTH);

    int ret = EncryWithHMacSha256(password, timestampStr, temp_encrypted_pwd);
    if (ret != 0)
    {
        qWarning() << "GetEncryptedPassword() error, encryption failed" << ret;
        return -1;
    }

    encryptedPwd = temp_encrypted_pwd;

    return 0;
}
