#include "ClearScene.h"
#include <Novice.h>

void ClearScene::Init() {
	inputManager_ = InputManager::GetInstance();
}

void ClearScene::Update() {
	if (inputManager_->ReleaseKey(DIK_SPACE)) {
		sceneNo = TITLE;
	}
}

void ClearScene::Draw() {
	// 文字を表示
	Novice::ScreenPrintf(0, 10, "GameClear");
	Novice::ScreenPrintf(0, 30, "Press SPACE");
}