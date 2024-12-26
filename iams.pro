# 添加核心、图形界面和窗口小部件模块
QT += core gui widgets

# 启用 C++17 标准
CONFIG += c++17

# 在 Windows 平台上，设置编译器选项以支持 UTF-8 编码
win32-msvc*:QMAKE_CXXFLAGS += /utf-8

# 添加头文件路径
INCLUDEPATH += $$PWD/src/headers \
    $$PWD/src/headers/mainWindows \
    $$PWD/src/headers/widgets \
    $$PWD/src/utils \
    $$PWD/src/hardware \
    $$PWD/include/base \
    $$PWD/include/openssl \
    $$PWD/include/util \
    $$PWD/include

CFLAGS = -g -w -lrt -lm -Wl,-z,relro,-z,now,-z,noexecstack -fno-strict-aliasing -fno-omit-frame-pointer -pipe -Wall -fPIC -MD -MP -fno-common -freg-struct-return  -fno-inline -fno-exceptions -Wfloat-equal -Wshadow -Wformat=2 -Wextra -rdynamic -Wl,-z,relro,-z,noexecstack  -fstrength-reduce -fno-builtin -fsigned-char -ffunction-sections -fdata-sections -Wpointer-arith -Wcast-qual -Waggregate-return -Winline -Wunreachable-code -Wcast-align -Wundef -Wredundant-decls  -Wstrict-prototypes -Wmissing-prototypes -Wnested-externs
# -D _SYS_LOG=1 -shared -fPIC
#-D Linux=1
CXXFLAGS = -O2 -g -Wall -fmessage-length=0 -lrt -Wl,-z,relro,-z,now,-z,noexecstack -fno-strict-aliasing -fno-omit-frame-pointer -pipe -Wall -fPIC -MD -MP -fno-common -freg-struct-return  -fno-inline -fno-exceptions -Wfloat-equal -Wshadow -Wformat=2 -Wextra -rdynamic -Wl,-z,relro,-z,noexecstack -fstack-protector-strong -fstrength-reduce -fno-builtin -fsigned-char -ffunction-sections -fdata-sections -Wpointer-arith -Wcast-qual -Waggregate-return -Winline -Wunreachable-code -Wcast-align -Wundef -Wredundant-decls  -Wstrict-prototypes -Wmissing-prototypes -Wnested-externs

unix: {
    LIBS += -lpaho-mqtt3as -lssl -lcrypto
}

# 注释掉了设置应用程序清单文件的代码，该文件用于指定 Windows 应用程序的属性，如管理员权限和 UI 访问权限
# QMAKE_LFLAGS += "/MANIFESTUAC:\"level='requireAdministrator' uiAccess='false'\""

# 指定源文件路径
SOURCES += \
    $$files($$PWD/src/sources/*.cpp) \
    $$files($$PWD/src/sources/mainWindows/*.cpp) \
    $$files($$PWD/src/sources/widgets/*.cpp) \
    $$files($$PWD/src/utils/*.cpp) \
    $$files($$PWD/src/hardware/*.cpp)

# 自动包含 src 目录下的所有头文件
HEADERS += \
    $$files($$PWD/src/headers/*.h) \
    $$files($$PWD/src/headers/mainWindows/*.h) \
    $$files($$PWD/src/headers/widgets/*.h)

    



# 指定 UI 文件路径
FORMS += \
    $$files($$PWD/src/forms/*.ui) \
    $$files($$PWD/src/forms/mainWindows/*.ui) \ 
    $$files($$PWD/src/forms/widgets/*.ui)
    

# 设置默认的部署规则
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin

# 如果目标路径不为空，则将可执行文件安装到目标路径
!isEmpty(target.path): INSTALLS += target

# 指定资源文件路径
RESOURCES += \
    pic.qrc

# 添加网络模块
QT += network

# 指定静态库编译
CONFIG += static

#开启串口支持
QT += serialport

# 指定动态库编译
DISTFILES += \
    lib/engines-1.1/capi.so \
    lib/engines-1.1/padlock.so \
    lib/libanl-2.23.so \
    lib/libanl.so.1 \
    lib/libcrypto.a \
    lib/libcrypto.so \
    lib/libcrypto.so.1.1 \
    lib/libpaho-mqtt3a.so \
    lib/libpaho-mqtt3a.so.1 \
    lib/libpaho-mqtt3a.so.1.3 \
    lib/libpaho-mqtt3as.so \
    lib/libpaho-mqtt3as.so.1 \
    lib/libpaho-mqtt3as.so.1.3 \
    lib/libpaho-mqtt3c.so \
    lib/libpaho-mqtt3c.so.1 \
    lib/libpaho-mqtt3c.so.1.3 \
    lib/libpaho-mqtt3cs.so \
    lib/libpaho-mqtt3cs.so.1 \
    lib/libpaho-mqtt3cs.so.1.3 \
    lib/libssl.a \
    lib/libssl.so \
    lib/libssl.so.1.1 \
    lib/paho_c_version \
    lib/pkgconfig/libcrypto.pc \
    lib/pkgconfig/libssl.pc \
    lib/pkgconfig/openssl.pc \
    lib/samples/MQTTAsync_publish \
    lib/samples/MQTTAsync_subscribe \
    lib/samples/MQTTClient_publish \
    lib/samples/MQTTClient_publish_async \
    lib/samples/MQTTClient_subscribe \
    lib/samples/paho_c_pub \
    lib/samples/paho_c_sub \
    lib/samples/paho_cs_pub \
    lib/samples/paho_cs_sub \
    lib/test/sync_client_test \
    lib/test/test1 \
    lib/test/test10 \
    lib/test/test11 \
    lib/test/test15 \
    lib/test/test2 \
    lib/test/test3 \
    lib/test/test4 \
    lib/test/test45 \
    lib/test/test5 \
    lib/test/test6 \
    lib/test/test9 \
    lib/test/test95 \
    lib/test/test_mqtt4async \
    lib/test/test_mqtt4sync
