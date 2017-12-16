#include "flyweightfactory.h"

int main() {
	FlyWeightFactory* fc = new FlyWeightFactory();
	fc->GetFlyWeight("hello");
	fc->GetFlyWeight("world");
	fc->GetFlyWeight("hello");

	delete fc;
	return 0;
}
