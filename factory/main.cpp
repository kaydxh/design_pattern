#include "factory.h"
#include <stdlib.h>

int main() {
	AbstractFactory* factory = new FactoryA();
	AbstractProduct* product = factory->createProduct();
	product->operation();
	delete product;
	product = NULL;
	delete factory;
	factory = NULL;

	factory = new FactoryB();
	product = factory->createProduct();
	product->operation();
	delete product;
	product = NULL;
	delete factory;
	factory = NULL;

}
