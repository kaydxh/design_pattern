#ifndef ELEMENT_H
#define ELEMENT_H

class Visitor;
class Element {
	public:
		Element();
		virtual  ~Element();

		virtual void Accept(Visitor* visit) = 0;
};

class ConcreteElementA : public Element {
	public:
		ConcreteElementA();
		virtual  ~ConcreteElementA();

		virtual void Accept(Visitor* visit);
};

class ConcreteElementB : public Element {
	public:
		ConcreteElementB();
		virtual  ~ConcreteElementB();

		virtual void Accept(Visitor* visit);
};
#endif 

