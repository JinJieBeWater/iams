#include "mqttTest.h"
#include "ui_mqttTest.h"

// 生成主题
QString createTopic(const QString &username)
{
    return "$oc/devices/" + username + "/sys/properties/report";
}

// 生成消息内容（Payload）
QString createPayload(int temperature, int humidity)
{
    QJsonObject service;
    service["service_id"] = "Iams"; // 服务ID
    service["properties"] = QJsonObject{{"temperature", temperature}, {"humidity", humidity}};

    // 使用当前时间戳
    // service["eventTime"] = QDateTime::currentDateTime().toString(Qt::ISODate); // 事件时间

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

    if (!QFile::exists("/dev/ttySAC1"))
    {
        Log() << "Serial device/dev/ttySAC1 does not exist";
        return;
    }

    // 创建串口对象，设置串口设备为/dev/ttySAC0
    serialPort = new QSerialPort(this);
    // 设置串口名称为/dev/ttySAC0
    serialPort->setPortName("/dev/ttySAC1");
    // 设置波特率为115200
    serialPort->setBaudRate(QSerialPort::Baud115200);
    // 设置数据位为8位
    serialPort->setDataBits(QSerialPort::Data8);
    // 设置校验位为无校验
    serialPort->setParity(QSerialPort::NoParity);
    // 设置停止位为1位
    serialPort->setStopBits(QSerialPort::OneStop);
    // 设置流控制为无流控制
    serialPort->setFlowControl(QSerialPort::NoFlowControl);

    // 打开串口
    if (serialPort->open(QIODevice::ReadWrite))
    {
        Log() << "open success";
    }
    else
    {
        Log() << "open failed";
    }

    connect(serialPort, &QSerialPort::readyRead, this, &mqttTest::on_readyRead);

    Log() << "new MqttClient()";
    mqttClient = new MqttClient();
    Log() << "new MqttClient() end";

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

void mqttTest::on_readyRead()
{
    QString data = serialPort->readAll();
    Log() << "recv: " << serialPort->portName() << ": " << data;
    QStringList dataList = data.split(",");
    Log() << "dataList: " << dataList;
    if (dataList.size() == 2)
    {
        QString tempStr = dataList[0].trimmed();
        tempStr.chop(1); // 移除末尾的'C'字符
        temperature = tempStr.toInt();

        QString humStr = dataList[1].trimmed();
        humStr.chop(1); // 移除末尾的'H'字符
        humidity = humStr.toInt();

        ui->temperatureKeyValue->setText(QString::number(temperature));
        ui->humidityKeyValue->setText(QString::number(humidity));
    }
}
void mqttTest::onReportBtClicked()
{
    QString username = "676b50b12ff1872637ca7a23_myNodeId"; // 设备名称
    // static int luminance = 0;                               // 你要上报的数据

    // // BUZZ 布尔
    // static bool buzz = false;
    // // LED 布尔
    // static bool led = true;
    // temperature 小数
    // static float temperature = 25.5;
    // humidify 小数
    // static float humidity = 50.0;

    // luminance++;
    // buzz = !buzz;
    // led = !led;
    // temperature += 0.1;
    // humidity += 0.1;

    // 构造消息内容（payload）
    QString payload = createPayload(temperature, humidity);

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
