#include "WebInputManager.h"

WebInputManager::WebInputManager(void)
{
}

WebInputManager::WebInputManager(GTC_GUI* window)
	: InputManager(window)
{
}

WebInputManager::~WebInputManager(void)
{
}

WebInputManager::WebInputManager(const WebInputManager& i)
	: InputManager(i)
{
}
void WebInputManager::getData(QString URL){
	QUrl url(URL);
	//url.setUrl(QString(QUrl::toPercentEncoding(URL, "/:")));
	if(url.isValid())
	{
		//Сохранить фрейм валидного урла в буфер
		w->setUrl(url);
	} 
	else
		//Ошибка: невалидный URL
		InputError.sendErrorMessage(NotValidURL);
}