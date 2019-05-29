#pragma once
#include "gtc_gui.h"
#include <QWebFrame>
#include <QWebElementCollection>

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
	~InputManager(void);

	Error InputError;
	GTC_GUI w;

/*!�������� html-����� � ������������ ��� � ���� ������
\param[in] Path ���� � �����/URL, ��� ���������� html-�����
\return ���������� ����� ���-��������
*/
	//����� �� � ����������� ������ ������� �����, ���������� ��� ���� �������� �������? 
	//���� ����� setData, ������� �������� � ui.webFrame ������ ���������� � ����. 
	//������ ���� ����� ��������� � gtc_gui.���. 
	//���� ���, �� �������� � getData � ������ HTMLData = ui.webView->page()->mainFrame(); ///> html-����� � ���� ������
	virtual void getData(QString Path) = 0; ///> pure virtual function
};