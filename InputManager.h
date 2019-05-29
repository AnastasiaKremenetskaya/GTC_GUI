#pragma once
#include "gtc_gui.h"
#include <QWebFrame>
#include <QWebElementCollection>

/*!
	\brief Родительский класс, отвечающий за получение данных

	Данный класс имеет двух наследников, отвечающих либо за загрузку данных из файла,
	либо по URL. Основная задача данного класса - получить и представить исходный 
	html-текст в виде фрейма
*/

class InputManager
{
public:
	InputManager(void);
	~InputManager(void);

	Error InputError;
	GTC_GUI w;

/*!Получает html-текст и представляет его в виде фрейма
\param[in] Path Путь к файлу/URL, где содержится html-текст
\return Полученный фрейм веб-страницы
*/
	//Можно ли в абстрактном классе описать метод, одинаковый для двух дочерних классов? 
	//Хочу метод setData, который поместит в ui.webFrame данные полученные с урла. 
	//Сейчас этот метод находится в gtc_gui.срр. 
	//Если нет, то добавить в getData в начало HTMLData = ui.webView->page()->mainFrame(); ///> html-текст в виде фрейма
	virtual void getData(QString Path) = 0; ///> pure virtual function
};