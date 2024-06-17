#include "GuiButtonEx.h"

bool GuiButtonEx(Rectangle rect, const char* text, ButtonAli hAlignment)
{
	Vector2 textSize = MeasureTextEx(GuiGetFont(), text, GuiGetStyle(DEFAULT, TEXT_SIZE), 1);

	switch (hAlignment)
	{
	case ButtonAli::LEFT:
		break;
	case ButtonAli::CENTER: rect.x += (rect.width - textSize.x) / 2;
		break;
	case ButtonAli::RIGHT:rect.x += rect.width - textSize.x;
		break;
	default:
		break;
	}

	return GuiButton(rect, text);
}
