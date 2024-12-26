#ifdef _UNIX

#ifndef MQTTTEST_H
#define MQTTTEST_H

#include <QMainWindow>
#include <QMessageBox>
#include <QSerialPort>

#include "StringUtil.h"
#include "MqttClient.h"
#include "Log.h"

QT_BEGIN_NAMESPACE
namespace Ui
{
    class mqttTest;
}
QT_END_NAMESPACE

class mqttTest : public QMainWindow
{
    Q_OBJECT

public:
    mqttTest(QWidget *parent = nullptr);
    ~mqttTest();

private slots:
    void onReportBtClicked();
    void on_readyRead();

private:
    Ui::mqttTest *ui;
    MqttClient *mqttClient;

    QSerialPort *serialPort;

    // 温度数据
    int temperature = 0;
    // 湿度数据
    int humidity = 0;
};
#endif // MQTTTEST_H

#endif // _UNIX
