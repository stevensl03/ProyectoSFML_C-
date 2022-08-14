#include <iostream>
#include "ControllerManager.h"


void ControllerManager::reset()
{
    std::fill(_buttons, _buttons + 4, false);
}

void ControllerManager::setPress(Buttons button)
{
    _buttons[(int)button] = true;
}

bool ControllerManager::isPress(Buttons button)
{
    return _buttons[(int)button];
}
