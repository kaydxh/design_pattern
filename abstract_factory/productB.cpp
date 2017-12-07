#include "productB.h"
#include <iostream>
using namespace std;

AbstractProductB::AbstractProductB() {
}

AbstractProductB::~AbstractProductB() {
}

ProductB_1::ProductB_1() {
}

ProductB_1::~ProductB_1() {
}

void ProductB_1::operation() {
	cout << "ProductB_1 operation" << endl;
}

ProductB_2::ProductB_2() {
}

ProductB_2::~ProductB_2() {
}

void ProductB_2::operation() {
	cout << "ProductB_2 operation" << endl;
}
