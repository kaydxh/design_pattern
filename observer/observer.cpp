#include "observer.h"
#include "subject.h"
#include <iostream>
using namespace std;

Observer::Observer()
	: objectState_(-1) {
}

Observer::~Observer() {
}

ConcreteObserver::ConcreteObserver() {
}

ConcreteObserver::~ConcreteObserver() {
}

void ConcreteObserver::update(Subject* sub) {
	objectState_ = sub->GetState();
	cout << "ConcreteObserver: " << this << "  update state:" << objectState_ << endl;
}

