#include "abstraction.h"
#include <stdio.h>

int main() {
	Implementor* impl = new ConcreteImplementorA();
	Abstraction* abs = new RefinedAbstraction(impl);
	abs->operation();

	delete impl;
	impl = NULL;
	delete abs;
	abs = NULL;
}
