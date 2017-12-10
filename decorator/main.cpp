#include "decorator.h"
#include <stdlib.h>

int main() {
	Component* comp = new ConcreteComponent();

	Decorator* decor = new ConcreteDecorator(comp);
	decor->operation();
	delete comp;
	comp = NULL;
	delete decor;
	decor = NULL;
}
