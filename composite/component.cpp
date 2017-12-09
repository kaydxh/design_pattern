#include "component.h"

Component::Component(const string& name)
	: name_(name) {
}

Component::~Component() {
}

void Component::Add(Component*) {
}

void Component::Remove(Component*) {
}

Component* Component::GetChild(int) {
	return NULL;
}
