#include "TableOfContents.h"

//�����������
TableOfContents::TableOfContents(QWebFrame * HTMLData, QString Path)
{
	this->HTMLData = 0;
	this->Path = Path;
	this->Headers = HTMLData->documentElement();
	this->HeaderCollection = Headers.findAll("h"); //�� h, � qregexp;
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