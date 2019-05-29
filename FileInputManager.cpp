#include "FileInputManager.h"
#include <QDomDocument>

FileInputManager::FileInputManager(void){}


FileInputManager::~FileInputManager(void){}


void FileInputManager::getData(QString FilePath)
{
	//Привязать имя к файлу 
	InputFile.setFileName(FilePath);

	//Открыть файл для чтения
	InputFile.open(QIODevice::ReadOnly);
	if (InputFile.isOpen())
	{	
		//Записать данные в байтовый массив
		QByteArray HtmlByteArray = InputFile.readAll();

		//Закрыть файл
		InputFile.close();

		//Проверить файл на наличие синтаксических ошибок
		if(

		//Конвертировать путь в URL и установить в буфер данные, взятые по URL
		w.setUrl(QUrl(QUrl::fromLocalFile(FilePath)));
	}
	else
		//Сообщить об ошибке
		InputError.sendErrorMessage(WrongInputFilename);
}