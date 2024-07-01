#pragma once
#include <unordered_map>
#include <string>
#include "raylib.h"

class AssetManager
{
private:
	std::unordered_map<std::string, Texture2D> textures;	
public:	
	AssetManager() {};
	~AssetManager();
	Texture2D GetTexture(std::string texturePath);
};

