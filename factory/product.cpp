#include "product.h"
#include <iostream>
using namespace std;

AbstractProduct::AbstractProduct() {
}

AbstractProduct::~AbstractProduct() {
}

ProductA::ProductA() {
}

ProductA::~ProductA() {
}

void ProductA::operation() {
	cout << " operation A" << endl;
}


ProductB::ProductB() {
}

ProductB::~ProductB() {
}

void ProductB::operation() {
	cout << " operation B" << endl;
}

