#pragma once
#include "raylib.h"

class Sprite
{
private:
	Texture2D texture;
	Rectangle textureRectangle;
	Vector2 origin;
public:
	Sprite() = delete;
	Sprite(Texture texture, Rectangle rectangleInTexture, Vector2 originPoint);
	void Draw(Vector2 position);

};

