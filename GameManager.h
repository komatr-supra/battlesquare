#pragma once
#include "MenuManager.h"

class GameManager
{
public:
	GameManager();
	~GameManager();
	void Update(float deltaTime);
	bool IsExitRequired() const;
	void SetCloseGame();
private:
	bool close;
	MenuManager* menuManager;	
};

