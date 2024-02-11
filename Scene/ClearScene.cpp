#include "ClearScene.h"
#include <Novice.h>

void ClearScene::Init() {
}

void ClearScene::Update() {
}

void ClearScene::Draw() {
	// 文字を表示
	Novice::ScreenPrintf(0, 10, "GameClear");
	Novice::ScreenPrintf(0, 30, "Press SPACE");
}