#include "factory.h"

#include <iostream>
using namespace std;

AbstractFactory::AbstractFactory() {
}

AbstractFactory::~AbstractFactory() {
}

FactoryA::FactoryA() {
}

FactoryA::~FactoryA() {
}

AbstractProduct* FactoryA::createProduct() {
	AbstractProduct* product = new ProductA;
	cout << "createproduct A" <<endl;
	return product;
}


FactoryB::FactoryB() {
}

FactoryB::~FactoryB() {
}

AbstractProduct* FactoryB::createProduct() {
	AbstractProduct* product = new ProductB;
	cout << "createproduct B" <<endl;
	return product;
}
