#include "FindingSnack.h"

FindingSnack::FindingSnack() {
	scene = Scene::create("", "Imgaes/background.png");
	obj = Object::create("Images/Çª¾Ó_Ä«¿ì¹ö°Å.png", scene, 300, 200);
	obj->setOnMouseCallback([&](auto obj, auto x, auto y, auto action)->bool {
		selectStage.enter();
		return true;
	});

}
FindingSnack::gameStart() {
	startGame(scene);
	return true;
}