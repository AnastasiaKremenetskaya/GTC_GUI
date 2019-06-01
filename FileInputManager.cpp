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
	//��������� ��� � ����� 
	InputFile.setFileName(FilePath);

	//������� ���� ��� ������
	InputFile.open(QIODevice::ReadOnly);
	if (InputFile.isOpen())
	{	
		QTextStream out(&InputFile);

		//�������� ������ � ������
		QString InputHtml = InputFile.readAll();

		//������� ����
		InputFile.close();

		//��������� ������ � �����
		w->setUrl(QUrl::fromLocalFile(FilePath));
	}
	else
		//�������� �� ������
		InputError.sendErrorMessage(WrongInputFilename);
}