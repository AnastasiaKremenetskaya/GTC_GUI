#pragma once
#include "gtc_gui.h"
#include <QFile>

class OutputManager
{
public:
	OutputManager(void);
	~OutputManager(void);

	Error OutputError;

	QFile ResultFile; ///> �������������� ����

/*!
������� ��������������� ���������� � ����
\param[in] HtmlData ���������������� html-��� ��� ������
*/
	void setData(QByteArray HTMLData);//������ ��� ��������
};

