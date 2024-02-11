#include "ICommand.h"

void MoveRightCommand::Exec(Player& player) {
	player.RightMove();
}

void MoveLeftCommand::Exec(Player& player) {
	player.LeftMove();
}