#include "factory.h"
#include <iostream>
using namespace std;

AbstractFactory::AbstractFactory() {
}

AbstractFactory::~AbstractFactory() {
}

Factory_1::Factory_1() {
}

Factory_1::~Factory_1() {
}

AbstractProductA* Factory_1::createProductA() {
	AbstractProductA* product = new ProductA_1();
	cout << "create productA_1" << endl;
	return product;
}

AbstractProductB* Factory_1::createProductB() {
	AbstractProductB* product = new ProductB_1();
	cout << "create productB_1" << endl;
	return product;
}

Factory_2::Factory_2() {
}

Factory_2::~Factory_2() {
}

AbstractProductA* Factory_2::createProductA() {
	AbstractProductA* product = new ProductA_2();
	cout << "create productA_2" << endl;
	return product;
}

AbstractProductB* Factory_2::createProductB() {
	AbstractProductB* product = new ProductB_2();
	cout << "create productB_2" << endl;
	return product;
}
