#ifndef _Input_Manager_
#define _Input_Manager_
#include "gtc_gui.h"
#include "Error.h"
/*!
	\brief ������������ �����, ���������� �� ��������� ������

	������ ����� ����� ���� �����������, ���������� ���� �� �������� ������ �� �����,
	���� �� URL. �������� ������ ������� ������ - �������� � ����������� �������� 
	html-����� � ���� ������
*/

class InputManager
{
public:
	InputManager(void);
	InputManager(GTC_GUI* window);
	InputManager(const InputManager&);
	virtual ~InputManager(void);

	Error InputError;
	GTC_GUI * w;

/*!�������� html-����� � ������������ ��� � ���� ������
\param[in] Path ���� � �����/URL, ��� ���������� html-�����
\return ���������� ����� ���-��������
*/
	//����� �� � ����������� ������ ������� �����, ���������� ��� ���� �������� �������? yes
	virtual void getData(QString InputFilePath) = 0; ///< pure virtual function
};

#endif