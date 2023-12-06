#include "Ground.h"
#include <cassert>

void Ground::Initialize(Model* model) {

	// NULLポインタチェック
	assert(model);

	// メンバ変数に受け取った値を代入
	model_ = model;

	// ワールド変数の初期化
	worldTransform_.Initialize();
}

void Ground::Update() {}

void Ground::Draw(const ViewProjection& viewProjection) {
	// 3Dモデルを描画
	model_->Draw(worldTransform_, viewProjection, textureHandle_);
}
