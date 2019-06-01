#ifndef _OutputManager_
#define _OutputManager_

#include "gtc_gui.h"
#include <QFile>
#include "Error.h"
class OutputManager
{
public:
	OutputManager(void);
	~OutputManager(void);

	Error OutputError;

	QFile ResultFile; ///< Результирующий файл

	/*!
	Заносит сгенерированное содержание в файл
	\param[in] OutputFilePath Путь к файлу для записи
	\param[in] ResultHtml Сгенерированный текст
	*/
	void setData(QString OutputFilePath, QString ResultHtml);
};

#endif