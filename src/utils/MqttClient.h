#ifndef MQTTCLIENT_H
#define MQTTCLIENT_H

#include <QObject>
#include <QString>
#include <QThread>

#include <QtNetwork>
#include <QDebug>
#include <QFile>
#include <QtCore>
#include <openssl/ossl_typ.h>
#include <openssl/hmac.h>
#include <stringutil.h>
#include <encryptionhelper.h>
#include <QMessageBox>
#include <MQTTAsync.h>

class MqttClient : public QObject
{
    Q_OBJECT

public:
    explicit MqttClient(QObject *parent = nullptr);
    ~MqttClient();

    bool connectToServer();
    bool publishMessage(const QString &topic, const QString &message);
    bool subscribeToTopic(const QString &topic);
    static void onConnectSuccess(void *context, MQTTAsync_successData *response);
    static void onConnectFailure(void *context, MQTTAsync_failureData *response);
    static void onMessageReceived(const QString &topic, const QByteArray &message);
    static int onMessageArrive(void *context, char *topicName, int topicLen, MQTTAsync_message *message);
    static void onConnectionLost(void *context, char *cause);
    static void onPublishSuccess(void *context, MQTTAsync_successData *response);
    static void onPublishFailure(void *context, MQTTAsync_failureData *response);
    static void onSubscribeSuccess(void *context, MQTTAsync_successData *response);
    static void onSubscribeFailure(void *context, MQTTAsync_failureData *response);

    void handleError(const QString &errorMessage);

    MQTTAsync client;
    QString uri;
    QString username;
    QString password;
    int port;
    int retryInterval;
    bool isConnected;
    QString encrypted_password = nullptr;
    QString temp_authMode;
    int mqttClientCreateFlag = 0; // this mqttClientCreateFlag is used to control the invocation of MQTTAsync_create, otherwise, there would be message leak.
    int flag = 0;                 // 0: deviceId access; 1:nodeId access, just for old mqtt api.
};

#endif // MQTTCLIENT_H
