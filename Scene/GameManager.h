#pragma once
#include <memory>
#include "IScene.h"
#include "GamePlayScene.h"
#include "TitleScene.h"
#include "ClearScene.h"

class GameManager
{
public:
	GameManager();
	~GameManager() = default;

	int Run();

private:
	// シーンを保持するメンバ変数
	std::unique_ptr<IScene> sceneArr_[3];
	int currentSceneNo_;
	int prevSceneNo_;
};

