#include "element.h"
#include "visitor.h"

Element::Element() {
}

Element::~Element() {
}

ConcreteElementA::ConcreteElementA() {
}

ConcreteElementA::~ConcreteElementA() {
}

void ConcreteElementA::Accept(Visitor* visit) {
	visit->VisitConcreteElementA(const_cast<ConcreteElementA*>(this));
}

ConcreteElementB::ConcreteElementB() {
}

ConcreteElementB::~ConcreteElementB() {
}

void ConcreteElementB::Accept(Visitor* visit) {
	visit->VisitConcreteElementB(this);
}
