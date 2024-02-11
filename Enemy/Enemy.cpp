#include "Enemy.h"
#include "../Utility.h"
#include <Novice.h>

void Enemy::Init() {
	Pos_.x = kWindowWidth / 2;
	Pos_.y = 100;
	Velcity_.x = 2.0f;
	Velcity_.y = 0;
	radius_ = 32.0f;
	isAlive_ = true;
}

void Enemy::Update() {
	// 移動処理
	Pos_.x += Velcity_.x;
	Pos_.y += Velcity_.y;

	// 画面端まで行くと反射
	if (Pos_.x - radius_ <= 0 || Pos_.x + radius_ >= 1280) {
		Velcity_.x *= -1;
	}
	if (Pos_.y - radius_ <= 0 || Pos_.y + radius_ >= 720) {
		Velcity_.y *= -1;
	}
}

void Enemy::Draw() {
	if (isAlive_) {
		Novice::DrawEllipse(Pos_.x, Pos_.y, radius_, radius_, 0.0f, RED, kFillModeSolid);
	}
}