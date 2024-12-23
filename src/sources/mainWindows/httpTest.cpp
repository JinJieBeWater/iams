#include "httpTest.h"
#include "ui_httpTest.h"

httpTest::httpTest(QWidget *parent) : QMainWindow(parent),
                                      ui(new Ui::httpTest)
{
    ui->setupUi(this);

    httpManager = new HttpManager();
}

httpTest::~httpTest()
{
    delete ui;
}

void httpTest::on_requestButton_clicked()
{
    Log() << "on_requestButton_clicked";
    // 获取url
    QUrl url = ui->urlEdit->text();
    Log() << "url: " << url;
    // 发送请求获取响应
    QNetworkReply *reply = httpManager->send(url, {HttpMethod::GET, HttpContentType::IMAGE});

    if (reply->error() == QNetworkReply::NoError)
    {
        if (reply->header(QNetworkRequest::ContentTypeHeader).toString().contains("image"))
        {
            httpManager->saveImageToFile(reply, "test.png");
        }
    }
    else
    {
        Log() << "Error:" << reply->errorString();
    }

    reply->deleteLater();

    QNetworkReply *reply2 = httpManager->send(QUrl("https://api.seniverse.com/v3/weather/now.json?key=Sklo5n7_p1T6c_AcV&location=%E5%B9%BF%E5%B7%9E&language=zh-Hans&unit=c"));

    if (reply2->error() == QNetworkReply::NoError)
    {
        QString data = byteToJsonString(reply2->readAll());
        Log() << "data:" << data;
        ui->showAreaLabel->setText(data);
    }
    else
    {
        Log() << "Error:" << reply2->errorString();
    }

    reply2->deleteLater();
}

void httpTest::on_showButton_clicked()
{
    Log() << "on_showButton_clicked";
    QImage image("test.png");
    ui->showAreaLabel->setPixmap(QPixmap::fromImage(image));
}

void httpTest::on_backButton_clicked()
{
    // 显示第一个窗口
    this->parentWidget()->show();

    // 隐藏当前窗口
    this->close();
}
