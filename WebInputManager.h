#ifndef _WebInputManager_
#define _WebInputManager_
#include "inputmanager.h"

/*!
	\brief �������� �����, ���� - �������� ������ �� URL

	�������� �����, ������� ������������ �� ����� ���������� ������ InputManager
*/

class WebInputManager : public InputManager
{
public:
	WebInputManager(void);
	WebInputManager(GTC_GUI* window);
	WebInputManager(const WebInputManager&);
	virtual ~WebInputManager(void);

/*!�������� html-����� �� URL � ������������ ��� � ���� ������
\param[in] Path URL ��������, ��� ���������� html-�����
\return ���������� ����� ���-��������
*/
	virtual void getData(QString URL) override;
};

#endif

