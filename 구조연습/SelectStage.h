#pragma once
#include "Stage.h"

class SelectStage {
	ScenePtr scene;
	ObjectPtr nums;
	char path[20];

public:
	SelectStage();
	bool enter();
};