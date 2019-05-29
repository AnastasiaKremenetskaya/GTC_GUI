#pragma once
#include <QWebFrame>
#include <QWebElementCollection>
#include "gtc_gui.h"

/*!
\brief ����� ��� ��������� ����������

� �������� ��������� ���������� ������ ����� 
��������� ��������� ������: 
- ������� 'h'-����;
- �������� �������� ��������� 'h'-����� ��� �������� ������� ������ � 
�� ����������� ����������� ������������� � ����������;
- �� ��������� ����������� ����������� ������� ����� �����������
- ������� ��������������� ���������� � �������� ������
*/

class TableOfContents: public QObject
{
	Q_OBJECT

public:

	TableOfContents(void);
	~TableOfContents(void);

	//�����������
	TableOfContents(const QWebFrame * HTMLData, QString Path);

	QString Path; ///< ���� � �����/URL, ��� ���������� html

	QWebFrame * HTMLData; ///< �������� html-�����

	/*!
	���������� � ������� ���������� � �������� ������
	\param[in] ModifiedHeaders ������ ��������� ���-��������� 'h'
	\return html-��������
	*/
	QString generateHTMLdoc();

private:	

	QWebElementCollection HeaderCollection; ///< ��������� ����� 'h' 

	QWebElement Headers; ///< ��� 'h', �������������� ��� ���-�������

	/*!
	���������� ������� �� ������ ����������� ���������
	\param[in/out] HeaderCollection ��������� ���-��������� 'h' - ����� this->
	*/
	void setTab();

	/*!
	�������� �������� ��������� ���-���������
	*/
	void modifyHeaderCollectionAttributes();

};