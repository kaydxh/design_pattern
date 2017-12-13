#include "concretehandler.h"
#include <iostream>
using namespace std;

ConcreteHandlerA::ConcreteHandlerA(Handler * handler)
	: Handler(handler) {
}

ConcreteHandlerA::~ConcreteHandlerA() {
}

void ConcreteHandlerA::HandleRequest(int n) {
	if (n < 500) {
		cout << "handle by ConcreteHandlerA" << endl;
	} else if (successor_) {
		successor_->HandleRequest(n);
	} else {
		cout << "can't handle request" << endl;
	}
}

ConcreteHandlerB::ConcreteHandlerB(Handler * handler)
	: Handler(handler) {
}

ConcreteHandlerB::~ConcreteHandlerB() {
}

void ConcreteHandlerB::HandleRequest(int n) {
	if (n >= 500 && n <= 1000) {
		cout << "handle by ConcreteHandlerB" << endl;
	} else if (successor_) {
		successor_->HandleRequest(n);
	} else {
		cout << "can't handle request" << endl;
	}
}
