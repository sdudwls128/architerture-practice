#include "FindingSnack.h"

FindingSnack::FindingSnack() {
	scene = Scene::create("", "Imgaes/background.png");
	obj = Object::create("Images/Ǫ��_ī�����.png", scene, 300, 200);
	obj->setOnMouseCallback([&](auto obj, auto x, auto y, auto action)->bool {
		selectStage.enter();
		return true;
	});

}
FindingSnack::gameStart() {
	startGame(scene);
	return true;
}