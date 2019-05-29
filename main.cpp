#include "gtc_gui.h"
#include <QtWidgets/QApplication>
#include <qtextstream.h>
#include <iostream>
#include <qwebpage.h>
#include <qwebframe.h>
#include "ui_gtc_gui.h"
//������ ������� ���������� ��������� �� ���
//GTC.exe file://mac/Home/Desktop/example.html result.html

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	GTC_GUI w;

	QString resultHtml;
	//if(!strncmp(argv[1], "www.", 4) || !strncmp(argv[1], "http", 4))
	//{
	//	WebInputManager * IM = new WebInputManager;
	//}
	//else
		FileInputManager * IM = new FileInputManager;

	InputManager * InputManager = IM;
	IM->getData(argv[1]);
	//��������� ����� ��������� ���� � �����(���������� � ��� ����)
	//w.setUrl(QUrl(argv[1]));

	//������������� ����������
	TableOfContents * TOC = new TableOfContents(w.getFrame(), argv[1]);
	resultHtml = TOC->generateHTMLdoc();

	//�������� � ����
	OutputManager * OM = new OutputManager;
	OM->setData(QByteArray(resultHtml.toUtf8()));

	//w.show();//���������� ����� �� ����
	return a.exec();
}
