#include "serialPortTest.h"
#include "ui_serialPortTest.h"

serialPortTest::serialPortTest(QWidget *parent) : QMainWindow(parent),
                                                  ui(new Ui::serialPortTest)
{
    ui->setupUi(this);

    if (!QFile::exists("/dev/ttySAC2"))
    {
        Log() << "Serial device/dev/ttySAC2 does not exist";
        QMessageBox::information(this, "tips", "Serial device/dev/ttySAC2 does not exist");
        return;
    }

    // 创建串口对象，设置串口设备为/dev/ttySAC0
    serialPort = new QSerialPort(this);
    // 设置串口名称为/dev/ttySAC0
    serialPort->setPortName("/dev/ttySAC2");
    // 设置波特率为115200
    serialPort->setBaudRate(QSerialPort::Baud9600);
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

    connect(serialPort, &QSerialPort::readyRead, this, &serialPortTest::on_readyRead);
}

void serialPortTest::on_readyRead()
{
    // 读取串口数据
    QString data = serialPort->readAll();
    qDebug() << "recv: " << data;
    Log() << serialPort->portName() << ": " << data;
    ui->recvPlainTextEdit->appendPlainText(serialPort->portName() + ": " + data);
}

serialPortTest::~serialPortTest()
{
    delete ui;
    serialPort->close();
    delete serialPort;
}

void serialPortTest::on_sendButton_clicked()
{
    // 获取发送数据
    Log() << "write: " << ui->sendLineEdit->text().trimmed();
    QString str = ui->sendLineEdit->text().trimmed();
    serialPort->write(str.toUtf8());
    Log() << "send: " << str;
}

void serialPortTest::on_statusButton_clicked()
{
    // 获取状态
    Log() << "AT\r\n";
    serialPort->write("AT\r\n");
}

void serialPortTest::on_setNameButton_clicked()
{
    Log() << "AT+NAMEJinJieBeWater\r\n";
    serialPort->write("AT+NAMEJinJieBeWater\r\n");
}

void serialPortTest::on_getPwdButton_clicked()
{
    Log() << "AT+PIN\r\n";
    serialPort->write("AT+PIN\r\n");
}

void serialPortTest::on_setPwdButton_clicked()
{
    Log() << "AT+PWD123456\r\n";
    serialPort->write("AT+PWD123456\r\n");
}

void serialPortTest::on_backButton_clicked()
{
    this->close();
}
