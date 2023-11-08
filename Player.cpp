#include "Player.h"
#include "ImGuiManager.h"
#include "Vector3.h"
#include <cassert>

void Player::Initialize(Model* model, uint32_t textureHandle) {

	// NULLポインタチェック
	assert(model);
	
	// メンバ変数に受け取った値を代入
	textureHandle_ = textureHandle;
	model_ = model;

	// ワールド変数の初期化
	worldTransform_.Initialize();
}

void Player::Update() {}

void Player::Draw(const ViewProjection& viewProjection) {
	// 3Dモデルを描画
	model_->Draw(worldTransform_, viewProjection, textureHandle_);
}
