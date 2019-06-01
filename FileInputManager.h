#ifndef _FileInputManager_
#define _FileInputManager_
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
	FileInputManager(GTC_GUI* window);
	FileInputManager(const FileInputManager&);
	~FileInputManager(void);

/*!�������� html-����� �� ���������� ���� � ������������ ��� � ���� ������
\param[in] Path ���� � �����, ��� ���������� html-�����
*/
	virtual void getData(QString FilePath);

private:
	QFile InputFile;
};

#endif