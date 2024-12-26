#ifndef MQTTTEST_H
#define MQTTTEST_H

#include <QMainWindow>
#include <QMessageBox>

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

private:
    Ui::mqttTest *ui;
    MqttClient *mqttClient;
};
#endif // MQTTTEST_H
