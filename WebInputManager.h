#pragma once
#include "inputmanager.h"

/*!
	\brief Дочерний класс, цель - загрузка данных по URL

	Дочерний класс, который отнаследован от ранее созданного класса InputManager
*/

class WebInputManager : public InputManager
{
public:
	WebInputManager(void);
	~WebInputManager(void);

/*!Получает html-текст по URL и представляет его в виде фрейма
\param[in] Path URL страницы, где содержится html-текст
\return Полученный фрейм веб-страницы
*/
	virtual void getData(QString URL);
};

