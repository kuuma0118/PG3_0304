#include "InputManager.h"

InputManager* InputManager::GetInstance() {
	static InputManager instance;
	return &instance;
}

void InputManager::Update() {
	// キー入力を受け取る
	memcpy(preKeys_, keys_, 256);
	Novice::GetHitKeyStateAll(keys_);
}

bool InputManager::TriggerKey(BYTE keyNumber) const {
	if (!preKeys_[keyNumber] && keys_[keyNumber]) {
		return true;
	}
	else {
		return false;
	}
}

bool InputManager::PressKey(BYTE keyNumber)const {
	if (keys_[keyNumber]) {
		return true;
	}
	else {
		return false;
	}
}

bool InputManager::ReleaseKey(BYTE keyNumber)const {
	if (preKeys_[keyNumber] && !keys_[keyNumber]) {
		return true;
	}
	else {
		return false;
	}
}