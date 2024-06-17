#include "GuiButtonEx.h"

bool GuiButtonEx(Rectangle rect, const char* text, ButtonAli hAlignment)
{
	Vector2 textSize = MeasureTextEx(GuiGetFont(), text, GuiGetStyle(FONT_DEFAULT, TEXT_SIZE), GuiGetStyle(FONT_DEFAULT, TEXT_SPACING));

	switch (hAlignment)
	{
	case ButtonAli::LEFT:
		break;
	case ButtonAli::CENTER: rect.x -= rect.width / 2;
		break;
	case ButtonAli::RIGHT:rect.x -= rect.width;
		break;
	default:
		break;
	}

	return GuiButton(rect, text);
}
