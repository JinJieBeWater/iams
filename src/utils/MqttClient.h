#ifdef _UNIX
#ifndef MQTTCLIENT_H
#define MQTTCLIENT_H

// Qt相关头文件
#include <QString>
#include <QThread>

#include <QtNetwork>
#include <QDebug>
#include <QFile>
#include <QtCore>
#include <QMessageBox>

// OpenSSL相关头文件
// #include <openssl/ossl_typ.h>
// #include <openssl/hmac.h>

// 自定义工具头文件
#include <stringutil.h>
#include <encryptionhelper.h>

#include <MQTTAsync.h>

#include "Log.h"

// MQTT客户端类
class MqttClient
{

public:
    // 构造和析构函数
    MqttClient();
    ~MqttClient();

    // MQTT基本操作方法
    bool connectToServer();                                            // 连接到MQTT服务器
    bool publishMessage(const QString &topic, const QString &message); // 发布消息
    bool subscribeToTopic(const QString &topic);                       // 订阅主题

    // MQTT回调函数
    static void onConnectSuccess(void *context, MQTTAsync_successData *response);                         // 连接成功回调
    static void onConnectFailure(void *context, MQTTAsync_failureData *response);                         // 连接失败回调
    static void onMessageReceived(const QString &topic, const QByteArray &message);                       // 消息接收回调
    static int onMessageArrive(void *context, char *topicName, int topicLen, MQTTAsync_message *message); // 消息到达回调
    static void onConnectionLost(void *context, char *cause);                                             // 连接丢失回调
    static void onPublishSuccess(void *context, MQTTAsync_successData *response);                         // 发布成功回调
    static void onPublishFailure(void *context, MQTTAsync_failureData *response);                         // 发布失败回调
    static void onSubscribeSuccess(void *context, MQTTAsync_successData *response);                       // 订阅成功回调
    static void onSubscribeFailure(void *context, MQTTAsync_failureData *response);                       // 订阅失败回调

    // 错误处理方法
    void handleError(const QString &errorMessage);

    // MQTT客户端属性
    MQTTAsync client;                     // MQTT异步客户端实例
    QString uri;                          // MQTT服务器地址
    QString username;                     // 用户名
    QString password;                     // 密码
    int port;                             // 端口号
    int retryInterval;                    // 重试间隔
    bool isConnected = false;             // 连接状态
    QString encrypted_password = nullptr; // 加密后的密码
    QString temp_authMode;                // 临时认证模式

    // 控制标志
    int mqttClientCreateFlag = 0; // 用于控制MQTTAsync_create的调用，防止消息泄漏
    int flag = 0;                 // 访问模式标志（0：设备ID访问；1：节点ID访问，用于旧的MQTT API）
};

#endif // MQTTCLIENT_H

#endif // _UNIX
