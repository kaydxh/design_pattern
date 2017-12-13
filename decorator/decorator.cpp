#include "decorator.h"
#include <iostream>
using namespace std;

Decorator::Decorator(Component* comp)
	: comp_(comp) {
}

Decorator::~Decorator() {
}

void Decorator::operation() {
	comp_->operation();
}

ConcreteDecorator::ConcreteDecorator(Component* comp)
	: Decorator(comp) {
}

ConcreteDecorator::~ConcreteDecorator() {
}

void ConcreteDecorator::operation() {
	comp_->operation();
	addBehavior();
}

void ConcreteDecorator::addBehavior() {
	cout << "addBehavior of ConcreteDecorator" << endl;
}

