#include "InputManager.h"

InputManager::InputManager(void)
{
}

InputManager::InputManager(GTC_GUI* window)
	: w(window)
{
}

InputManager::InputManager(const InputManager& i)
{
	w = i.w;
	InputError = i.InputError;
}

InputManager::~InputManager(void)
{
}