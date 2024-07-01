#include "AssetManager.h"

Texture AssetManager::GetTexture(std::string texturePath)
{
	auto it = textures.find(texturePath);
	if (it == textures.end())
	{
		textures.emplace(texturePath, LoadTexture(texturePath.c_str()));
	}
	return textures[texturePath];
}
AssetManager::~AssetManager() {
	// Release all loaded textures
	for (auto& texture : textures) {
		UnloadTexture(texture.second);
	}
}
