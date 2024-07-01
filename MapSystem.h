#pragma once
#include "Grid.h"
#include <iostream>

class MapSystem
{
public:
	MapSystem(int width, int height, std::string mapDataPath);
	~MapSystem();
private:
	Grid<int>* grid{nullptr};
};

