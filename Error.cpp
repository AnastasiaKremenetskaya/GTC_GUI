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
//	���� ���� �� ������
//	1. 1. ������� ��������� "Host is not found�
//2. ���� ���� ������� ����������
//	2. 1. ������� ��������� �Unable to open file�
//3. ���� ������������ �������������� ������
//		3. 1. ������� ��������� �������: �� ������ <����� ������>, ��������� </����� ����> , �� �� ������ <����� ����> , ��������������� ���
//
void Error::endWorkAndSendErrorMessageToConsole(QString ErrorMessage){
	//spawnl(GTC.exe ErrorMessage)
	exit(EXIT_FAILURE);
}

Error::~Error(void)
{
}
