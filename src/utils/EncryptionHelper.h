#ifdef _UNIX

#ifndef ENCRYPTIONHELPER_H
#define ENCRYPTIONHELPER_H

#include <QString>
#include <QDebug>
#include <openssl/hmac.h>
#include <openssl/evp.h>
#include <openssl/sha.h>

#define PASSWORD_ENCRYPT_LENGTH 64
#define TIME_STAMP_LENGTH 10
#define TRY_MAX_TIME 100 // Maximum length of attempted encryption
#define SHA256_ENCRYPTION_LENGTH 32

class EncryptionHelper
{
public:
    // 构造函数，接收一个 password 参数
    EncryptionHelper(const QString &password);
    // 使用 HMAC-SHA256 对数据进行加密
    int EncryWithHMacSha256(const QString &inputData, QString &inputKey, QString &outData);
    // 获取加密后的密码
    int GetEncryptedPassword(const QString &timestamp, QString &encryptedPwd);

private:
    QString password; // password 成员变量
};

#endif // ENCRYPTIONHELPER_H

#endif // _UNIX
