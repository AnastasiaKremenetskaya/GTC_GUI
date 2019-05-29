#pragma once
#include <QWebFrame>
#include <QWebElementCollection>
#include "gtc_gui.h"

/*!
\brief Класс для генерации оглавления

В процессе генерации оглавления данный класс 
выполняет следующие задачи: 
- Находит 'h'-теги;
- Изменяет атрибуты найденных 'h'-тегов для создания якорных ссылок и 
их корректного визуального представления в оглавлении;
- На основании вложенности расставляет отступы между заголовками
- Заносит сгенерированное оглавление в байтовый массив
*/

class TableOfContents: public QObject
{
	Q_OBJECT

public:

	TableOfContents(void);
	~TableOfContents(void);

	//Конструктор
	TableOfContents(const QWebFrame * HTMLData, QString Path);

	QString Path; ///< Путь к файлу/URL, где содержится html

	QWebFrame * HTMLData; ///< Исходный html-текст

	/*!
	Генерирует и заносит оглавление в байтовый массив
	\param[in] ModifiedHeaders Список коллекций веб-элементов 'h'
	\return html-документ
	*/
	QString generateHTMLdoc();

private:	

	QWebElementCollection HeaderCollection; ///< Коллекция тегов 'h' 

	QWebElement Headers; ///< Тег 'h', представленный как веб-элемент

	/*!
	Определяет отступы по уровню вложенности элементов
	\param[in/out] HeaderCollection Коллекция веб-элементов 'h' - через this->
	*/
	void setTab();

	/*!
	Изменяет атрибуты коллекции веб-элементов
	*/
	void modifyHeaderCollectionAttributes();

};