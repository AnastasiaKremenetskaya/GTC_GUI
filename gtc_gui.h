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

	/*Устанавливает в виджет веб-просмотра(т.н.буфер) фрейм html-текста, полученный по заданному URL
	\param[in] url Путь к файлу/URL, где содержится html-текст
	\return Полученный фрейм веб-страницы
	*/
	void setUrl(const QUrl &url);

	/*Получает фрейм, хранящийся в буфере в данный момент
	\return Полученный фрейм веб-страницы
	*/
	QWebFrame * getFrame();

private:
	Ui::GTC_GUIClass ui;
};

#endif // GTC_GUI_H
