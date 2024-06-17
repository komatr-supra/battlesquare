#pragma once
#include "raygui.h"

enum class ButtonAli
{
	LEFT, CENTER, RIGHT
};
bool GuiButtonEx(Rectangle rect, const char* text, ButtonAli hAlignment);

