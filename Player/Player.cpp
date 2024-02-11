#include "Player.h"
#include "Utility.h"
#include <Novice.h>

Player::Player() {
	
}

void Player::Init() {
	inputManager_ = InputManager::GetInstance();

	// 初期値の設定
	// 座標
	Pos_ = { kWindowWidth / 2, kWindowHeight / 2 };
	// 速度
	const float kSpeed = 5.0f;
	Velcity_ = { kSpeed, kSpeed };
	// 半径
	radius_ = 32;
	// 発射フラグ
	isShot_ = false;

	// 弾
	// 初期化
	bullet_.Init();
	// 初期位置
	bullet_.SetPos(Pos_);
}

void Player::Update() {
#pragma region 入力処理
	// 移動処理
	// Y軸
	if (inputManager_->PressKey(DIK_W)) {
		Pos_.y -= Velcity_.y;
	}
	if (inputManager_->PressKey(DIK_S)) {
		Pos_.y += Velcity_.y;
	}
	// X軸
	if (inputManager_->PressKey(DIK_D)) {
		Pos_.x += Velcity_.x;
	}
	if (inputManager_->PressKey(DIK_A)) {
		Pos_.x -= Velcity_.x;
	}

	// 発射処理
	if ( inputManager_->ReleaseKey(DIK_SPACE)) {
		isShot_ = true;
	}
#pragma endregion

	if (isShot_) {
		bullet_.SetIsAlive(true);
		isShot_ = false;
	}

	// 発射されたら更新処理を呼ぶ
	if (bullet_.GetIsAlive()) {
		bullet_.Update();
	}
	else {
		bullet_.SetPos(Pos_);
	}
}

void Player::Draw() {
	// 自機
	Novice::DrawEllipse(Pos_.x, Pos_.y, radius_, radius_, 0.0f, BLUE, kFillModeSolid);
	// 弾
	bullet_.Draw();
}