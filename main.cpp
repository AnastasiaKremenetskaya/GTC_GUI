#include "gtc_gui.h"
#include <QtWidgets/QApplication>
#include <qtextstream.h>
#include <iostream>
#include <qwebpage.h>
#include <qwebframe.h>
#include "ui_gtc_gui.h"
#include "FileInputManager.h"
#include "WebInputManager.h"
#include "TableOfContents.h"
#include "OutputManager.h"

//������ ������� ���������� ��������� �� ���
//GTC_Console.exe file://mac/Home/Desktop/example.html result.html

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	GTC_GUI w;

	argv[1] = "file://mac/Home/Desktop/example.html";

	QString ResultHtml; ///> ������ �� ��������������� html-�����

	QRegExp UrlRegexp;//("(http(s)?:\/\/.)?(www\.)?[-a-zA-Z0-9@:%.\+~#=]{2,256}\.[a-z]{2,6}\b([-a-zA-Z0-9@:%\+.~#?&//=]*)"); ///> ���������� ��������� ��� �������� ����

	//����������, ������ ����� ������
	InputManager * inputManager;


	if(QString(argv[1]).contains(UrlRegexp)) {
		inputManager = new WebInputManager(&w);
	}
	else {
		inputManager = new FileInputManager(&w);
	}

	//�������� ������
	inputManager->getData(argv[1]);

	//������������� ����������
	TableOfContents * TOC = new TableOfContents(w.getFrame(), argv[1]);
	ResultHtml = TOC->generateHTMLdoc();

	//�������� ��������������� ���������� � ����
	OutputManager * OM = new OutputManager;
	OM->setData(argv[2], ResultHtml);

	return a.exec();
}
