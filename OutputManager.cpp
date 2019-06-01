#include "OutputManager.h"


OutputManager::OutputManager(void)
{
}


OutputManager::~OutputManager(void)
{
}

void OutputManager::setData(QString OutputFilePath, QString ResultHtml)
{
	QFile ResultFile(OutputFilePath);
	
	//Если файл для записи успешно открыт
	if(ResultFile.open(QIODevice::WriteOnly)) 
    { 
		QTextStream in(&OutputFilePath);
        in << ResultHtml;
	}
	else 
		OutputError.sendErrorMessage(WrongOutputFilename);
}
