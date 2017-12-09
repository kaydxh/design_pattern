#include "implementor.h"
#include <iostream>
using namespace std;

Implementor::Implementor() {
}

Implementor::~Implementor() {
}

ConcreteImplementorA::ConcreteImplementorA() {
}

ConcreteImplementorA::~ConcreteImplementorA() {
}

void ConcreteImplementorA::operation() {
	cout << "ConcreteImplementorA operation" << endl;
}


