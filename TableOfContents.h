#ifndef _TableOfContents_
#define _TableOfContents_

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

class TableOfContents
{
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
	*/
	void setTab();

	/*!
	�������� �������� ��������� ���-���������
	*/
	void modifyHeaderCollectionAttributes();

};

#endif