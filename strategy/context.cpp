#include "context.h"

Context::Context() {
}

Context::~Context() {
}

void Context::setStrategy(Strategy* s) {
	strategy_ = s;
}

void Context::ContextInterface() {
	strategy_->AlgorithmnInterface();
}
