#ifndef _FileInputManager_
#define _FileInputManager_
#include "inputmanager.h"
#include <QFile>

/*!
	\brief Дочерний класс, цель - загрузка данных из файла

	Дочерний класс, который отнаследован от ранее созданного класса InputManager
*/
class FileInputManager : public InputManager
{
public:
	FileInputManager(void);
	FileInputManager(GTC_GUI* window);
	FileInputManager(const FileInputManager&);
	~FileInputManager(void);

/*!Получает html-текст по указанному пути и представляет его в виде фрейма
\param[in] Path Путь к файлу, где содержится html-текст
*/
	virtual void getData(QString FilePath);

private:
	QFile InputFile;
};

#endif