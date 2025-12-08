#pragma once
#include "../Engine/GameObject.h"

class TitleScene : public GameObject
{
public:
	TitleScene();
	~TitleScene();
	void Initialize() override;
	void Update() override;
	void Draw() override;
	void Release() override;
};