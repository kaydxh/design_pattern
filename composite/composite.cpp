#include "composite.h"
#include <stdlib.h>
#include <algorithm>
#include <iostream>
using namespace std;

Composite::Composite(const string& name)
	: Component(name) {
}

Composite::~Composite() {
	for (size_t i = 0; i < components_.size(); ++i) {
		delete components_[i];
		components_[i] = NULL;
	}
}

void Composite::Add(Component* pComposit) {
	components_.push_back(pComposit);
}


void Composite::Remove(Component* pComposit) {
	vector<Component*>::iterator it;
	it = find(components_.begin(), components_.end(), pComposit);

	if (it != components_.end()) {
		swap(*it, components_.back());
		components_.pop_back();
	}
}

Component* Composite::GetChild(int index) {
	if (index < 0 || index >= components_.size()) {
		return NULL;
	}

	return components_[index];
}

void Composite::operation() {
	cout << "+" << name_ << endl;
	for (size_t i = 0; i < components_.size(); ++i) {
		cout << "|-";
		components_[i]->operation();
	}
}
