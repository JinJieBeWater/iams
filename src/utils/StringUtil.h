#ifndef __STRING_UTIL_H_
#define __STRING_UTIL_H_

#include <QString>
#include <QDateTime>
#include <cstdarg>

#define CLIENT_TIME_LENGTH    10

class StringUtil {
public:
    // 获取客户端时间戳（yyyyMMddHH 格式）
    static QString getClientTimestamp();

    // 合并多个字符串，返回一个新的QString
    static QString combineStrings(int strAmount, const char* str1, ...);

    // 分配内存并初始化为零
    static void string_malloc(QString &str, int length);

    // 复制指定长度的字符串到目标变量
    static int CopyStrValue(QString* dst, const QString& src, int length);

    // 获取字符串的长度
        static int StringLength(const QString& str);
};

#endif /* __STRING_UTIL_H_ */
