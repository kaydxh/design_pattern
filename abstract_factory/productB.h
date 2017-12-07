#ifndef PRODUCTB_H
#define PRODUCTB_H

class AbstractProductB {
	public:
		AbstractProductB();
		virtual ~AbstractProductB();

		virtual void operation() = 0;
};

class ProductB_1 : public AbstractProductB {
	public:
		ProductB_1();
		virtual ~ProductB_1();

		virtual void operation();
};

class ProductB_2 : public AbstractProductB {
	public:
		ProductB_2();
		virtual ~ProductB_2();

		virtual void operation();
};

#endif
