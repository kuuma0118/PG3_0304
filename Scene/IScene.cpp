#include "IScene.h"

int IScene::sceneNo = STAGE;

// 純粋デストラクタの定義
IScene::~IScene(){}

// シーン番号のゲッター
int IScene::GetSceneNo() { return sceneNo; }