#ifndef FACTORY_H
#define FACTORY_H

#include "productA.h"
#include "productB.h"

class AbstractFactory {
	public:
		AbstractFactory();
		virtual	~AbstractFactory();

		virtual AbstractProductA* createProductA() = 0;
		virtual AbstractProductB* createProductB() = 0;
};

class Factory_1 : public AbstractFactory{
	public:
		Factory_1();
		virtual ~Factory_1();

		virtual AbstractProductA* createProductA();
		virtual AbstractProductB* createProductB();
};


class Factory_2 : public AbstractFactory {
	public:
		Factory_2();
		virtual ~Factory_2();

		virtual AbstractProductA* createProductA();
		virtual AbstractProductB* createProductB();
};

#endif
