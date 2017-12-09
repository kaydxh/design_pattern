#include "leaf.h"
#include <iostream>
using namespace std;

Leaf::Leaf(const string& name)
	: Component(name) {
}

Leaf::~Leaf() {
}

void Leaf::operation() {
	cout << name_ << endl;
}
