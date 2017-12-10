#include "component.h"
#include <iostream>
using namespace std;

Component::Component() {
}

Component::~Component() {
}

ConcreteComponent::ConcreteComponent() {
}

ConcreteComponent::~ConcreteComponent() {
}

void ConcreteComponent::operation() {
	cout << "ConcreteComponent operation" << endl;
}
