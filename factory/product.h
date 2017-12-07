#ifndef PRODUCT_H
#define PRODUCT_H

class AbstractProduct {
	public:
		AbstractProduct();
		virtual ~AbstractProduct();

		virtual void operation() = 0;
};

class ProductA : public AbstractProduct {
	public:
		ProductA();
		virtual ~ProductA();

		virtual void operation();
};

class ProductB : public AbstractProduct {
	public:
		ProductB();
		virtual ~ProductB();

		virtual void operation();
};
#endif
