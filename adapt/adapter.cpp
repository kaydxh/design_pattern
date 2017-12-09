#include "adapter.h"

Adapter::Adapter(Adaptee* adaptee)
	: adaptee_(adaptee) {
}

Adapter::~Adapter() {
}

void Adapter::Request() {
	adaptee_->SpecialRequest();
}
