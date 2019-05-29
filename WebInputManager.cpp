#include "WebInputManager.h"


WebInputManager::WebInputManager(void){}
WebInputManager::~WebInputManager(void){}

void WebInputManager::getData(QString URL)
{
	QUrl url(URL);
	//url.setUrl(QString(QUrl::toPercentEncoding(URL, "/:")));
	if(url.isValid())
	{
		//���������� � ����� ������, ������ �� URL
		w.setUrl(url);
	} 
	else
		InputError.sendErrorMessage(NotValidURL);
}