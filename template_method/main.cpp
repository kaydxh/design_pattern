#include "templatemethod.h"
#include <stdio.h>

int main() {
	AbstractClass* abstract  = new ConcreteClass();
	abstract->TemplateMethod();

	delete abstract;
	abstract = NULL;
}
