#include "director.h"

Director::Director(AbstractBuilder* build)
	: build_(build) {
}

Director::~Director() {
}

void Director::Construct() {
	build_->buildPartA();
	build_->buildPartB();
}
