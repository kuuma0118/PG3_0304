#include "Player.h"
#include "Utility.h"
#include <Novice.h>

Player::Player() {
	
}

void Player::Init() {
	// 初期値の設定
	// 座標
	Pos_ = { kWindowWidth / 2, kWindowHeight / 2 };
	// 速度
	const float kSpeed = 5.0f;
	Velcity_ = { kSpeed, kSpeed };
	// 半径
	radius_ = 32;
}

void Player::Update() {

}

void Player::Draw() {
	// 自機
	Novice::DrawEllipse(Pos_.x, Pos_.y, radius_, radius_, 0.0f, RED, kFillModeSolid);
}

void Player::RightMove() {
	Pos_.x += Velcity_.x;
}

void Player::LeftMove() {
	Pos_.x -= Velcity_.x;
}