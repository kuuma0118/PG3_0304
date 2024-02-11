#pragma once
#include "IScene.h"
#include "../Player/Player.h"
#include "Input/InputHandler.h"
#include "Input/ICommand.h"

class GamePlayScene : public IScene
{
public:
	~GamePlayScene();
	void Init() override;
	void Update() override;
	void Draw() override;
private:
	InputHandler* inputHandler_ = nullptr;
	ICommand* command_ = nullptr;
	Player* player_;
};

