#include "FileInputManager.h"
#include <QDomDocument>

FileInputManager::FileInputManager(void){}


FileInputManager::~FileInputManager(void){}


void FileInputManager::getData(QString FilePath)
{
	//��������� ��� � ����� 
	InputFile.setFileName(FilePath);

	//������� ���� ��� ������
	InputFile.open(QIODevice::ReadOnly);
	if (InputFile.isOpen())
	{	
		//�������� ������ � �������� ������
		QByteArray HtmlByteArray = InputFile.readAll();

		//������� ����
		InputFile.close();

		//��������� ���� �� ������� �������������� ������
		if(

		//�������������� ���� � URL � ���������� � ����� ������, ������ �� URL
		w.setUrl(QUrl(QUrl::fromLocalFile(FilePath)));
	}
	else
		//�������� �� ������
		InputError.sendErrorMessage(WrongInputFilename);
}