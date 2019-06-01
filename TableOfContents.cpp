#include "TableOfContents.h"

TableOfContents::TableOfContents(const QWebFrame * HTMLData, QString Path)
{
	this->HTMLData = 0;
	this->Path = Path;
	this->Headers = HTMLData->documentElement();
	this->HeaderCollection = Headers.findAll("h"); //не h, а qregexp;
}

void TableOfContents::setTab()
{

}

void TableOfContents::modifyHeaderCollectionAttributes()
{

}

QString TableOfContents::generateHTMLdoc()
{
	return QString();//delete
}