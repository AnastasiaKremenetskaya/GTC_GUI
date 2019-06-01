#ifndef GTC_GUI_H
#define GTC_GUI_H

#include <QtWidgets/QMainWindow>
#include <process.h>
#include <QWebElement>
#include "ui_gtc_gui.h"


class GTC_GUI : public QMainWindow
{
	Q_OBJECT

public:
	GTC_GUI(QWidget *parent = 0);
	~GTC_GUI();

	/*������������� � ������ ���-���������(�.�.�����) ����� html-������, ���������� �� ��������� URL
	\param[in] url ���� � �����/URL, ��� ���������� html-�����
	\return ���������� ����� ���-��������
	*/
	void setUrl(const QUrl &url);

	/*�������� �����, ���������� � ������ � ������ ������
	\return ���������� ����� ���-��������
	*/
	QWebFrame * getFrame();

private:
	Ui::GTC_GUIClass ui;
};

#endif // GTC_GUI_H
