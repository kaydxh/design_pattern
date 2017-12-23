#ifndef VISITOR_H
#define VISITOR_H

class ConcreteElementA;
class ConcreteElementB;

class Visitor {
	public:
		Visitor();
		virtual ~Visitor();

		virtual void VisitConcreteElementA(ConcreteElementA* elemA) = 0;
		virtual void VisitConcreteElementB(ConcreteElementB* elemB) = 0;
};

class ConcreteVisitorA : public Visitor {
	public:
		ConcreteVisitorA();
		virtual ~ConcreteVisitorA();

		virtual void VisitConcreteElementA(ConcreteElementA* elemA);
		virtual void VisitConcreteElementB(ConcreteElementB* elemB);
};

class ConcreteVisitorB : public Visitor {
	public:
		ConcreteVisitorB();
		virtual ~ConcreteVisitorB();

		virtual void VisitConcreteElementA(ConcreteElementA* elemA);
		virtual void VisitConcreteElementB(ConcreteElementB* elemB);
};
#endif
