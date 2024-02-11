#include "TitleScene.h"

void TitleScene::Init() {
}

void TitleScene::Update() {
}

void TitleScene::Draw() {
	// 文字を表示
	Novice::ScreenPrintf(0, 10, "TitleScene");
	Novice::ScreenPrintf(0, 30, "Press SPACE");
}