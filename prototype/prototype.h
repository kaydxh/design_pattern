#ifndef PROTOTYPE_H
#define PROTOTYPE_H

class Prototype {
	public:
		Prototype();
		virtual ~Prototype();

		virtual Prototype* clone() = 0;
};

class ConcretePrototype : public Prototype {
	public:
		ConcretePrototype();
		virtual ~ConcretePrototype();

		virtual Prototype* clone();
};
#endif
