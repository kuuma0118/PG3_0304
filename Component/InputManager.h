#pragma once
#include <Novice.h>

class InputManager
{
public:
	static InputManager* GetInstance();

	InputManager() = default;

	void Update();

	bool TriggerKey(BYTE keyNumber) const;

	bool PressKey(BYTE keyNumber) const;

	bool ReleaseKey(BYTE keyNumber) const;

private:
	char keys_[256] = { 0 };
	char preKeys_[256] = { 0 };
};

