#include "observer.h"
#include "subject.h"
#include <iostream>
using namespace std;

Observer::Observer() {
}

Observer::~Observer() {
}

ConcreteObserver::ConcreteObserver()
	: objectState_(-1) {
}

ConcreteObserver::~ConcreteObserver() {
}

void ConcreteObserver::update(Subject* sub) {
	objectState_ = sub->GetState();
	cout << "ConcreteObserver: " << this << "  update state:" << objectState_ << endl;
}

