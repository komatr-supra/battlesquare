#include "Sprite.h"
#include "raymath.h"

Sprite::Sprite(Texture texture, Rectangle rectangleInTexture, Vector2 originPoint):
	texture{texture},
	textureRectangle{rectangleInTexture},
	origin{originPoint}
{
}

void Sprite::Draw(Vector2 position)
{	
	DrawTextureRec(texture, textureRectangle, Vector2Subtract(position, origin), WHITE);
}
