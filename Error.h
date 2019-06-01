#ifndef _Error_
#define _Error_

#include "gtc_gui.h"

//��������� ���� ������
enum ErrorType{NotValidURL, WrongInputFilename, SyntaxError, WrongOutputFilename};

class Error
{
public:
	Error(void);
	~Error(void);

	/*!
	������� ��������� �� ������ � �������
	\param[in] ErrorType ��� ������
	*/
	void sendErrorMessage(enum ErrorType);

private:		

	int line; 
	int column;

	/*!
	��������� ������ ��������� � ������� ��������� �� ������ � �������
	\param[in] ErrorMessage ����� ������
	*/
	void endWorkAndSendErrorMessageToConsole(QString ErrorMessage);

	QString ErrorMessage; ///> ����� ������

};

#endif