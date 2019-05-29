#include "Error.h"


Error::Error(void)
{
}

void Error::sendErrorMessage(ErrorType ErrorType){ 
	switch(ErrorType)
	{
	case NotValidURL:
		ErrorMessage = "Host is not found";
		endWorkAndSendErrorMessageToConsole(ErrorMessage);
		break;
	case WrongInputFilename:
		ErrorMessage = "Unable to open file";
		endWorkAndSendErrorMessageToConsole(ErrorMessage);
		break;
	case WrongOutputFilename:
		ErrorMessage = "Unable to open the result file";
		endWorkAndSendErrorMessageToConsole(ErrorMessage);
		break;
	}

}
//	Если хост не найден
//	1. 1. Вывести сообщение "Host is not found»
//2. Если файл открыть невозможно
//	2. 1. Вывести сообщение «Unable to open file»
//3. Если присутствует синтаксическая ошибка
//		3. 1. Вывести сообщение «Ошибка: на строке <номер строки>, обнаружен </номер тега> , но не найден <номер тега> , соответствующий ему»
//
void Error::endWorkAndSendErrorMessageToConsole(QString ErrorMessage){
	//spawnl(GTC.exe ErrorMessage)
	exit(EXIT_FAILURE);
}

Error::~Error(void)
{
}
