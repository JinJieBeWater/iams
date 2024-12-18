#include "sendRequest.h"

NetworkManager::NetworkManager()
{
  manager = new QNetworkAccessManager();
}

NetworkManager::~NetworkManager()
{
  // 确保所有正在进行的请求都完成了
  QEventLoop loop;
  QObject::connect(manager, &QNetworkAccessManager::finished, &loop, &QEventLoop::quit);
  loop.exec();
  manager->deleteLater();
}

QNetworkReply *NetworkManager::sendRequest(QUrl url, const requestOptions &options)
{
  SYSTEMLog() << "Sending request to:" << url.toString();
  QNetworkRequest request;
  request.setUrl(url);

  setContentTypeHeader(request, options.contentType);

  QNetworkReply *reply = nullptr;

  switch (options.method)
  {
  case HttpMethod::GET:
    reply = manager->get(request);
    break;
  case HttpMethod::POST:
    // reply = manager->post(request, options.body);
    break;
  default:
    qDebug() << "sendRequest: Invalid method!";
    break;
  }

  this->waitForResponse(reply);

  return reply;
}

void NetworkManager::setContentTypeHeader(QNetworkRequest &request, HttpContentType contentType)
{
  switch (contentType)
  {
  case HttpContentType::JSON:
    request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");
    break;
  case HttpContentType::IMAGE:
    request.setHeader(QNetworkRequest::ContentTypeHeader, "image/png");
    break;
  default:
    break;
  }
}

void NetworkManager::waitForResponse(QNetworkReply *reply)
{
  QEventLoop loop;
  QObject::connect(reply, &QNetworkReply::finished, &loop, &QEventLoop::quit);
  loop.exec();
}

void NetworkManager::saveImageToFile(QNetworkReply *reply, const QString &filename)
{
  QFile file(filename);
  if (file.open(QIODevice::WriteOnly))
  {
    file.write(reply->readAll());
    file.close();
    SYSTEMLog() << "Image saved to:" << filename;
  }
}
