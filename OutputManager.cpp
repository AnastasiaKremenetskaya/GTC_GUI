#include "OutputManager.h"


OutputManager::OutputManager(void)
{
}


OutputManager::~OutputManager(void)
{
}

void OutputManager::setData(QByteArray HtmlData)
{
	QFile ResultFile("TOC.html");
	if(ResultFile.open(QIODevice::WriteOnly)) 
    { 
		//���� ���� ��� ������ ������� ������
		ResultFile.write(HtmlData);
	}
	else 
		OutputError.sendErrorMessage(WrongOutputFilename);
}
