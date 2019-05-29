#pragma once
#include "gtc_gui.h"
#include <QFile>

class OutputManager
{
public:
	OutputManager(void);
	~OutputManager(void);

	Error OutputError;

	QFile ResultFile; ///> Результирующий файл

/*!
Заносит сгенерированное содержание в файл
\param[in] HtmlData Модифицированный html-код для записи
*/
	void setData(QByteArray HTMLData);//вообще там кустринг
};

