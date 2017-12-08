#include "prototype.h"

#include <stdlib.h>

int main() {
	Prototype* pt = new ConcretePrototype();
	Prototype* pt2 = pt->clone();

	delete pt;
	pt = NULL;
	delete pt2;
	pt2 = NULL;
}
