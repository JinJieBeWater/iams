#include "mqttTest.h"
#include "ui_mqttTest.h"

// 生成主题
QString createTopic(const QString &username)
{
    return "$oc/devices/" + username + "/sys/properties/report";
}

// 生成消息内容（Payload）
QString createPayload(int luminance)
{
    QJsonObject service;
    service["service_id"] = "Iams"; // 服务ID
    service["properties"] = QJsonObject{{"luminance", luminance}};

    // 使用当前时间戳
    service["eventTime"] = QDateTime::currentDateTime().toString(Qt::ISODate); // 事件时间

    QJsonArray services;
    services.append(service);

    QJsonObject json;
    json["services"] = services;

    QJsonDocument doc(json);

    return QString(doc.toJson(QJsonDocument::Compact)); // 返回紧凑格式的 JSON 字符串
}

mqttTest::mqttTest(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::mqttTest)
{
    ui->setupUi(this);

    mqttClient = new MqttClient();

    // Connect to the MQTT server
    if (!mqttClient->connectToServer())
    {
        Log() << "Link server failed!";
    }
    else
    {
        Log() << "Link server successful!";
    }

    // 定时上报数据
    QTimer *reportTimer = new QTimer(this);
    connect(reportTimer, &QTimer::timeout, this, &mqttTest::onReportBtClicked);
    reportTimer->start(10000);
}

mqttTest::~mqttTest()
{
    delete ui;
}

void mqttTest::onReportBtClicked()
{
    QString username = "676b50b12ff1872637ca7a23_myNodeId"; // 设备名称
    static int luminance = 0;                               // 你要上报的数据

    // // BUZZ 布尔
    // static bool buzz = false;
    // // LED 布尔
    // static bool led = true;
    // temperature 小数
    // static float temperature = 25.5;
    // humidify 小数
    // static float humidity = 50.0;

    luminance++;
    // buzz = !buzz;
    // led = !led;
    // temperature += 0.1;
    // humidity += 0.1;

    // 构造消息内容（payload）
    QString payload = createPayload(luminance);

    // 构造上报主题
    QString report_topic = StringUtil::combineStrings(3, "$oc/devices/", username.toStdString().c_str(), "/sys/properties/report");

    Log() << "Topic: " << report_topic.toUtf8().constData();
    Log() << "Payload: " << payload.toUtf8().constData();

    // Publish a message
    // 调用 publishMessage 发送数据
    bool success = mqttClient->publishMessage(report_topic, payload);

    if (success)
    {
        Log() << "Data reported successfully!";
    }
    else
    {
        Log() << "Failed to report data.";
    }
}
