#include "gtc_gui.h"

GTC_GUI::GTC_GUI(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
}

void GTC_GUI::setUrl(const QUrl &url)
 {
     ui.webView->setUrl(url);
 }

QWebFrame * GTC_GUI::getFrame()
{
	QWebFrame * HTMLData = ui.webView->page()->mainFrame(); ///> html-текст в виде фрейма
	return HTMLData;
}

GTC_GUI::~GTC_GUI()
{

}
