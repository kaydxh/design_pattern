#include "prototype.h"
#include <iostream>
using namespace std;

Prototype::Prototype() {
}

Prototype::~Prototype() {
}

ConcretePrototype::ConcretePrototype() {
}

ConcretePrototype::~ConcretePrototype() {
}

Prototype* ConcretePrototype::clone() {
	Prototype* pt = new ConcretePrototype();
	cout << "clone ConcretePrototype" << std::endl;
	return pt;
}
