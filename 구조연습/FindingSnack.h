#pragma once
#include "MainMenu.h"

class FindingSnack {
	ScenePtr scene;
	ObjectPtr obj;
	SelectStage selectStage;

public:
	FindingSnack();
	bool gameStart();
};