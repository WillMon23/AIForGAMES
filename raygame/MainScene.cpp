#include "MainScene.h"
#include "Transform2D.h"
#include "GameManager.h"

void MainScene::start()
{
	GameManager::getPlayer()->getTransform()->setWorldPostion({ 200, 200 });
	addItem(GameManager::getPlayer());
}
