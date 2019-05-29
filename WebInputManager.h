#pragma once
#include "inputmanager.h"

/*!
	\brief �������� �����, ���� - �������� ������ �� URL

	�������� �����, ������� ������������ �� ����� ���������� ������ InputManager
*/

class WebInputManager : public InputManager
{
public:
	WebInputManager(void);
	~WebInputManager(void);

/*!�������� html-����� �� URL � ������������ ��� � ���� ������
\param[in] Path URL ��������, ��� ���������� html-�����
\return ���������� ����� ���-��������
*/
	virtual void getData(QString URL);
};

