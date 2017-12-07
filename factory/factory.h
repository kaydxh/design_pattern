#ifndef FACTORY_H
#define FACTORY_H

#include "product.h"

class AbstractFactory {
	public:
		AbstractFactory();
		virtual ~AbstractFactory();

		virtual AbstractProduct*  createProduct() = 0;
};

class FactoryA : public AbstractFactory {
	public:
		FactoryA();
		virtual ~FactoryA();

		virtual AbstractProduct* createProduct();
};

class FactoryB : public AbstractFactory {
	public:
		FactoryB();
		virtual ~FactoryB();

		virtual AbstractProduct* createProduct();
};

#endif
