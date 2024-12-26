#include "StringUtil.h"

QString StringUtil::getClientTimestamp()
{
    QDateTime currentDateTime = QDateTime::currentDateTimeUtc();
    QString timestamp = currentDateTime.toString("yyyyMMddHH");
    return timestamp;
}

QString StringUtil::combineStrings(int strAmount, const char *str1, ...)
{
    if (strAmount <= 0 || str1 == nullptr)
    {
        return QString();
    }

    va_list args;
    va_start(args, str1);

    int totalLength = QString::fromUtf8(str1).length();
    for (int i = 1; i < strAmount; ++i)
    {
        const char *tempStr = va_arg(args, const char *);
        if (tempStr != nullptr)
        {
            totalLength += QString::fromUtf8(tempStr).length();
        }
    }

    va_end(args);

    QString result;
    result.reserve(totalLength);
    result += QString::fromUtf8(str1);

    va_start(args, str1);
    for (int i = 1; i < strAmount; ++i)
    {
        const char *tempStr = va_arg(args, const char *);
        if (tempStr != nullptr)
        {
            result += QString::fromUtf8(tempStr);
        }
    }
    va_end(args);

    return result;
}

void StringUtil::string_malloc(QString &str, int length)
{
    if (length <= 0)
    {
        return;
    }
    str = QString(length, '\0');
}

int StringUtil::CopyStrValue(QString *dst, const QString &src, int length)
{
    if (length <= 0)
    {
        return 0;
    }

    *dst = src.left(length);
    return 0;
}

int StringUtil::StringLength(const QString &str)
{
    return str.length();
}
