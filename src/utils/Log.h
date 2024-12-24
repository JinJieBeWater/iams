#include <QDebug>
#include <QFileInfo>

#define Log(...) qDebug(__VA_ARGS__).noquote().nospace() << "[" << QFileInfo(__FILE__).fileName() << ":" << __LINE__ << "]: "
