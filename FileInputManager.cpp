#include "FileInputManager.h"
#include <QDomDocument>

FileInputManager::FileInputManager(void)
{
}

FileInputManager::FileInputManager(GTC_GUI* window)
	: InputManager(window)
{
}

FileInputManager::FileInputManager(const FileInputManager& i)
	: InputManager(i)
{
}

FileInputManager::~FileInputManager(void)
{
}

void FileInputManager::getData(QString FilePath)
{
	//Привязать имя к файлу 
	InputFile.setFileName(FilePath);

	//Открыть файл для чтения
	InputFile.open(QIODevice::ReadOnly);
	if (InputFile.isOpen())
	{	
		QTextStream out(&InputFile);

		//Записать данные в строке
		QString InputHtml = InputFile.readAll();

		//Закрыть файл
		InputFile.close();

		//Сохранить данные в буфер
		w->setUrl(QUrl::fromLocalFile(FilePath));
	}
	else
		//Сообщить об ошибке
		InputError.sendErrorMessage(WrongInputFilename);
}