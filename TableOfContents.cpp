#include "TableOfContents.h"

//Конструктор
TableOfContents::TableOfContents(QWebFrame * HTMLData, QString Path)
{
	this->HTMLData = 0;
	this->Path = Path;
	this->Headers = HTMLData->documentElement();
	this->HeaderCollection = Headers.findAll("h"); //не h, а qregexp;
}

void setTab()
{

}

void modifyHeaderCollectionAttributes()
{

}

QString generateHtmlDoc()
{
	return 0;//delete
}