#ifndef _Input_Manager_
#define _Input_Manager_
#include "gtc_gui.h"
#include "Error.h"
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
	InputManager(GTC_GUI* window);
	InputManager(const InputManager&);
	virtual ~InputManager(void);

	Error InputError;
	GTC_GUI * w;

/*!Получает html-текст и представляет его в виде фрейма
\param[in] Path Путь к файлу/URL, где содержится html-текст
\return Полученный фрейм веб-страницы
*/
	//Можно ли в абстрактном классе описать метод, одинаковый для двух дочерних классов? yes
	virtual void getData(QString InputFilePath) = 0; ///< pure virtual function
};

#endif