#include "factory.h"
#include <stdlib.h>

int main() {
	AbstractFactory* factory1 = new Factory_1();
	AbstractProductA* productA = factory1->createProductA();
	productA->operation();
	AbstractProductB* productB = factory1->createProductB();
	productB->operation();

	delete factory1;
	factory1 = NULL;
	delete productA;
	productA = NULL;
	delete productB;
	productB = NULL;

	AbstractFactory* factory2 = new Factory_2();
	productA = factory2->createProductA();
	productA->operation();
	
	productB = factory2->createProductB();
	productB->operation();

	delete factory2;
	factory2 = NULL;
	delete productA;
	productA = NULL;
	delete productB;
	productB = NULL;

	return 0;
}
