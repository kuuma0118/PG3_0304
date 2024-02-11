#include "GamePlayScene.h"
#include <Novice.h>

GamePlayScene::~GamePlayScene() {
	delete player_;
}

void GamePlayScene::Init() {
	inputHandler_ = new InputHandler();

	// Assign command
	inputHandler_->AssignMoveRightCommand2PressKeyD();
	inputHandler_->AssignMoveLeftCommand2PressKeyA();

	// 自機
	player_ = new Player();
	player_->Init();
}

void GamePlayScene::Update() {
	// get Input
	command_ = inputHandler_->HandleInput();

	// set Command
	if (this->command_) {
		command_->Exec(*player_);
	}

	// 自機
	player_->Update();
}

void GamePlayScene::Draw() {
	// 自機
	player_->Draw();

	// 文字を表示
	Novice::ScreenPrintf(0, 10, "GameScene");
	Novice::ScreenPrintf(0, 30, "SPACE:Shot  WASD:Move");
}