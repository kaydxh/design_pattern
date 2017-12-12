#include "templatemethod.h"
#include <iostream>
using namespace std;

AbstractClass::AbstractClass() {
}

AbstractClass::~AbstractClass() {
}

void AbstractClass::TemplateMethod() {
	PrimitiveMethodA();
	PrimitiveMethodB();
}

ConcreteClass::ConcreteClass() {
}

ConcreteClass::~ConcreteClass() {
}

void ConcreteClass::PrimitiveMethodA() {
	cout << "ConcreteClass PrimitiveMethodA" << endl;
}

void ConcreteClass::PrimitiveMethodB() {
	cout << "ConcreteClass PrimitiveMethodB" << endl;
}
