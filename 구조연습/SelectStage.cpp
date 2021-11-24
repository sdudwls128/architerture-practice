#include "SelectStage.h"

SelectStage::SelectStage() {
	scene = Scene::create("Images/background.png");
	nums = Object::create("Images/nums.png", scene, 200, 100);

	nums->setOnMouseCallback([&](auto object, auto x, auto y, auto action)->bool {
		Stage::enter();
		return true;
	});
}

bool SelectStage::enter() {
	scene->enter();
	return true;
}