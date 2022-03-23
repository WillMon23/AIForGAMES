#pragma once
#include "Player.h"
#include "Enemy.h"

class GameManager
{
public:
	static void initEnemies(int amount);
	static Player* getPlayer() { return m_player; };

private:
	static Player* m_player;
	static Enemy** m_enemies;
};

