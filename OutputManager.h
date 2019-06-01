#ifndef _OutputManager_
#define _OutputManager_

#include "gtc_gui.h"
#include <QFile>
#include "Error.h"
class OutputManager
{
public:
	OutputManager(void);
	~OutputManager(void);

	Error OutputError;

	QFile ResultFile; ///< �������������� ����

	/*!
	������� ��������������� ���������� � ����
	\param[in] OutputFilePath ���� � ����� ��� ������
	\param[in] ResultHtml ��������������� �����
	*/
	void setData(QString OutputFilePath, QString ResultHtml);
};

#endif