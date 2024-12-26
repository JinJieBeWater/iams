#include "MqttClient.h"

MQTTAsync_connectOptions connOpts = MQTTAsync_connectOptions_initializer;
MQTTAsync_SSLOptions sslOpts = MQTTAsync_SSLOptions_initializer;

MqttClient::MqttClient()
{
    uri = "ee99faaa8c.st1.iotda-device.cn-north-4.myhuaweicloud.com";
    port = 1883;
    username = "676b50b12ff1872637ca7a23_myNodeId";
    password = "JinJieBeWater";
    retryInterval = 10;

    connOpts.cleansession = 1;
    connOpts.keepAliveInterval = 120;
    connOpts.connectTimeout = 30;
    connOpts.retryInterval = retryInterval;
    connOpts.onSuccess = onConnectSuccess;
    connOpts.onFailure = onConnectFailure;

    Log() << "MqttClient()";

    if (!mqttClientCreateFlag)
    {
        temp_authMode = "_0_0_";
        if (flag == 1)
        {
            temp_authMode = "_2_0_";
        }

        QString loginTimestamp = StringUtil::getClientTimestamp();

        if (loginTimestamp == nullptr)
        {
            Log() << "Failure to get the timestamp";
        }
        else
        {
            Log() << "Get the timestamp success";
        }

        EncryptionHelper encryptionHelper(password);

        QString timestamp = StringUtil::getClientTimestamp();

        int encryptedRet = encryptionHelper.GetEncryptedPassword(loginTimestamp, encrypted_password);
        if (encryptedRet != 0)
        {
            Log() << "Failed to obtain the encrypted password";
        }
        else
        {
            Log() << "The encrypted password was obtained successfully: " << encrypted_password;
        }

        QString clientId = nullptr;

        clientId = StringUtil::combineStrings(3, username.toStdString().c_str(), temp_authMode.toStdString().c_str(), loginTimestamp.toStdString().c_str());

        loginTimestamp = nullptr;

        Log() << "uri: " << uri.toUtf8().constData();
        Log() << "uri: " << uri.toUtf8().constData();

        Log() << "clientId: " << clientId.toStdString().c_str();
        Log() << "clientId: " << clientId.toStdString().c_str();

        int createRet = MQTTAsync_create(&client, uri.toUtf8().constData(), clientId.toStdString().c_str(), MQTTCLIENT_PERSISTENCE_NONE, nullptr);

        Log() << "createRet: " << createRet;

        clientId = nullptr;

        if (createRet)
        {
            Log() << "mqtt_connect() MQTTAsync_create error, result " << createRet;
        }
        else
        {
            mqttClientCreateFlag = 1;
            Log() << "mqtt_connect() mqttClientCreateFlag = 1.\n";
        }

        MQTTAsync_setCallbacks(client, nullptr, onConnectionLost, onMessageArrive, nullptr);
    }
}

MqttClient::~MqttClient()
{
    if (client)
    {
        MQTTAsync_destroy(&client);
    }
}

bool MqttClient::connectToServer()
{
    Log() << "Connecting to the MQTT server...";
    Log() << "isConnected: " << isConnected;
    if (isConnected)
    {
        Log() << "Already connected to the MQTT server.";
        return true;
    }

    // 使用 std::string 来持久化存储 username 和 password
    std::string usernameStr = username.toUtf8().constData();
    std::string passwordStr = encrypted_password.toUtf8().constData();

    // 设置连接选项
    connOpts.username = usernameStr.c_str(); // std::string 的 c_str() 返回 const char*
    connOpts.password = passwordStr.c_str();

    if (port != 8883)
    {
        connOpts.ssl = nullptr;
    }
    else
    {
        sslOpts.trustStore = "./conf/rootcert.pem";
        sslOpts.enabledCipherSuites = "TLSv1.3";
        sslOpts.enableServerCertAuth = 1;
        connOpts.ssl = &sslOpts;
    }

    int rc = -1;
    if ((rc = MQTTAsync_connect(client, &connOpts)) != MQTTASYNC_SUCCESS)
    {
        handleError("Failed to connect to server, error code: " + QString::number(rc));
        return false;
    }

    if (encrypted_password != NULL)
    {
        encrypted_password = nullptr;
    }
    Log() << "Connected to the MQTT server.";
    isConnected = true; // 连接成功后设置为 true
    return true;
}

// 处理收到的消息
void MqttClient::onMessageReceived(const QString &topic, const QByteArray &message)
{
    // 打印接收到的 topic 和 payload
    Log() << "Topic: " << topic;
    Log() << "Payload: " << message;

    // 解析 JSON 数据
    QJsonDocument doc = QJsonDocument::fromJson(message);
    if (!doc.isObject())
    {
        Log() << "Invalid JSON format!";
        return;
    }

    QJsonObject jsonObject = doc.object();

    // 从 JSON 中提取数据
    QString objectDeviceId = jsonObject.value("object_device_id").toString();
    QString commandName = jsonObject.value("command_name").toString();
    QString serviceId = jsonObject.value("service_id").toString();

    // 解析 paras 子对象
    QJsonObject paras = jsonObject.value("paras").toObject();
    QString value = paras.value("value").toString();

    // 打印解析后的数据
    Log() << "Object Device ID: " << objectDeviceId;
    Log() << "Command Name: " << commandName;
    Log() << "Service ID: " << serviceId;
    Log() << "Paras Value: " << value;

    // 你可以根据解析的内容进行相应的处理
    if (commandName == "ON_OFF")
    {
        // 执行打开或关闭操作
        if (value == "1")
        {
            Log() << "Turn ON the device.";
        }
        else if (value == "0")
        {
            Log() << "Turn OFF the device.";
        }
    }
}

bool MqttClient::publishMessage(const QString &topic, const QString &message)
{
    if (!isConnected)
    {
        handleError("Not connected to MQTT server.");
        return false;
    }

    MQTTAsync_message pubmsg = MQTTAsync_message_initializer;
    MQTTAsync_responseOptions opts = MQTTAsync_responseOptions_initializer;

    opts.onSuccess = onPublishSuccess;
    opts.onFailure = onPublishFailure;

    pubmsg.payload = (void *)message.toUtf8().constData();
    pubmsg.payloadlen = message.length();
    pubmsg.qos = 1;
    pubmsg.retained = 0;

    int ret = MQTTAsync_sendMessage(client, topic.toUtf8().constData(), &pubmsg, &opts);
    if (ret != MQTTASYNC_SUCCESS)
    {
        handleError("Failed to publish message, error code: " + QString::number(ret));
        Log() << "Error code: " << ret;
        return false;
    }

    return true;
}

int MqttClient::onMessageArrive(void *context, char *topicName, int topicLen, MQTTAsync_message *message)
{
    Q_UNUSED(context);
    Q_UNUSED(topicLen);
    Log() << "Message arrived, topic: " << topicName << ", message: " << message->payload;

    return 1;
}

bool MqttClient::subscribeToTopic(const QString &topic)
{
    if (!isConnected)
    {
        handleError("Not connected to MQTT server.");
        return false;
    }

    MQTTAsync_responseOptions opts = MQTTAsync_responseOptions_initializer;
    opts.onSuccess = onSubscribeSuccess;
    opts.onFailure = onSubscribeFailure;

    int qos = 1;
    int ret = MQTTAsync_subscribe(client, topic.toUtf8().constData(), qos, &opts);
    if (ret != MQTTASYNC_SUCCESS)
    {
        handleError("Failed to subscribe to topic, error code: " + QString::number(ret));
        return false;
    }

    // 设置回调函数
    MQTTAsync_setCallbacks(client, this, nullptr, onMessageArrive, nullptr);

    return true;
}

void MqttClient::handleError(const QString &errorMessage)
{
    Log() << errorMessage;
}

void MqttClient::onConnectSuccess(void *context, MQTTAsync_successData *response)
{
    Q_UNUSED(context);
    Q_UNUSED(response);
    Log() << "Connected successfully.";
}

void MqttClient::onConnectFailure(void *context, MQTTAsync_failureData *response)
{
    Q_UNUSED(context);
    Q_UNUSED(response);
    Log() << "Connection failed, code: " << response->code;
}

void MqttClient::onConnectionLost(void *context, char *cause)
{
    Q_UNUSED(context);
    Q_UNUSED(cause);
    Log() << "Connection lost, cause: " << cause;
}

void MqttClient::onPublishSuccess(void *context, MQTTAsync_successData *response)
{
    Q_UNUSED(context);
    Q_UNUSED(response);
    Log() << "Message published successfully.";
}

void MqttClient::onPublishFailure(void *context, MQTTAsync_failureData *response)
{
    Q_UNUSED(context);
    Log() << "Publish failed, code: " << response->code;
    Log() << "Error message: " << response->message;
}

void MqttClient::onSubscribeSuccess(void *context, MQTTAsync_successData *response)
{
    Q_UNUSED(context);
    Q_UNUSED(response);
    Log() << "Subscribed to topic successfully.";
}

void MqttClient::onSubscribeFailure(void *context, MQTTAsync_failureData *response)
{
    Q_UNUSED(context);
    Q_UNUSED(response);
    Log() << "Subscription failed, code: " << response->code;
}
