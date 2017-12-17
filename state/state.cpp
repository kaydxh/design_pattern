#include "state.h"
#include "context.h"

#include <iostream>
using namespace std;

State::State() {
}

State::~State() {
}

ConcreteStateA::ConcreteStateA() {
}

ConcreteStateA::~ConcreteStateA() {
}

void ConcreteStateA::Handle(Context* ctx) {
	std::cout << "handle by ConcreteStateA" << endl;
	if (NULL != ctx) {
		ctx->ChangeState(new ConcreteStateB());
	}
}

ConcreteStateB::ConcreteStateB() {
}

ConcreteStateB::~ConcreteStateB() {
}

void ConcreteStateB::Handle(Context* ctx) {
	std::cout << "handle by ConcreteStateB" << endl;
	if (NULL != ctx) {
		ctx->ChangeState(new ConcreteStateA());
	}
}
