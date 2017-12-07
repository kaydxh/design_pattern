#include "productA.h"
#include <iostream>
using namespace std;

AbstractProductA::AbstractProductA() {
}

AbstractProductA::~AbstractProductA() {
}

ProductA_1::ProductA_1() {
}

ProductA_1::~ProductA_1() {
}

void ProductA_1::operation() {
	cout << "ProductA_1 operation" << endl;
}

ProductA_2::ProductA_2() {
}

ProductA_2::~ProductA_2() {
}

void ProductA_2::operation() {
	cout << "ProductA_2 operation" << endl;
}
