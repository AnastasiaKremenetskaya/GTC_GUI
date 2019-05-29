#pragma once
#include "inputmanager.h"
#include <QFile>

/*!
	\brief �������� �����, ���� - �������� ������ �� �����

	�������� �����, ������� ������������ �� ����� ���������� ������ InputManager
*/
class FileInputManager : public InputManager
{
public:
	FileInputManager(void);
	~FileInputManager(void);

/*!�������� html-����� �� ���������� ���� � ������������ ��� � ���� ������
\param[in] Path ���� � �����, ��� ���������� html-�����
*/
	virtual void getData(QString FilePath);

private:
	QFile InputFile;
};

