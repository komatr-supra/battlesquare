#include "MapSystem.h"
#include "json.hpp"
#include <fstream>

using json = nlohmann::json;

MapSystem::MapSystem(int width, int height, std::string mapDataPath)
{
	std::ifstream file(mapDataPath);
	grid = new Grid<int>();
}

MapSystem::~MapSystem()
{
}
