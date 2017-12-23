#include "element.h"
#include "objectstructure.h"

int main() {
	ObjectStructure* objs = new ObjectStructure();

	Element* elemA = new ConcreteElementA();
	Element* elemB = new ConcreteElementB();

	objs->attach(elemA);
	objs->attach(elemB);

	Visitor* visitA = new ConcreteVisitorA();
	Visitor* visitB = new ConcreteVisitorB();

	objs->accept(visitA);
	objs->accept(visitB);

	delete objs;
	delete elemA;
	delete elemB;

	delete visitA;
	delete visitB;
}
