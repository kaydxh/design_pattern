#include "visitor.h"
#include <iostream>
using namespace std;

Visitor::Visitor() {
}

Visitor::~Visitor() {
}

ConcreteVisitorA::ConcreteVisitorA() {
}

ConcreteVisitorA::~ConcreteVisitorA() {
}

void ConcreteVisitorA::VisitConcreteElementA(ConcreteElementA* elemA) {
	cout << "VisitConcreteElementA by ConcreteVisitorA\n" << endl;
}

void ConcreteVisitorA::VisitConcreteElementB(ConcreteElementB* elemB) {
	cout << "VisitConcreteElementA by ConcreteVisitorB\n" << endl;
}

ConcreteVisitorB::ConcreteVisitorB() {
}

ConcreteVisitorB::~ConcreteVisitorB() {
}

void ConcreteVisitorB::VisitConcreteElementA(ConcreteElementA* elemA) {
	cout << "VisitConcreteElementB by ConcreteVisitorA\n" << endl;
}

void ConcreteVisitorB::VisitConcreteElementB(ConcreteElementB* elemB) {
	cout << "VisitConcreteElementB by ConcreteVisitorB\n" << endl;
}
