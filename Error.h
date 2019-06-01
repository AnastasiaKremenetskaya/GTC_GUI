#ifndef _Error_
#define _Error_

#include "gtc_gui.h"

//Возможные типы ошибок
enum ErrorType{NotValidURL, WrongInputFilename, SyntaxError, WrongOutputFilename};

class Error
{
public:
	Error(void);
	~Error(void);

	/*!
	Выводит сообщение об ошибке в консоль
	\param[in] ErrorType Тип ошибки
	*/
	void sendErrorMessage(enum ErrorType);

private:		

	int line; 
	int column;

	/*!
	Завершает работу программы и выводит сообщение об ошибке в консоль
	\param[in] ErrorMessage Текст ошибки
	*/
	void endWorkAndSendErrorMessageToConsole(QString ErrorMessage);

	QString ErrorMessage; ///> Текст ошибки

};

#endif