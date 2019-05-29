#pragma once
#include "gtc_gui.h"

//��������� ���� ������
enum ErrorType{NotValidURL, WrongInputFilename, SyntaxError, WrongOutputFilename};

class Error
{
public:
	Error(void);
	~Error(void);

	void sendErrorMessage(enum ErrorType);

private:		

	int line;
	int column;

	void endWorkAndSendErrorMessageToConsole(QString ErrorMessage);
	QString ErrorMessage;

};

