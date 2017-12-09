#include "abstraction.h"

RefinedAbstraction::RefinedAbstraction(Implementor* impl) 
	: impl_(impl) {
}

RefinedAbstraction::~RefinedAbstraction() {
}

void RefinedAbstraction::operation() {
	impl_->operation();
}
