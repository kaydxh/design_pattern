#ifndef PRODUCTA_H
#define PRODUCTA_H

class AbstractProductA {
	public:
		AbstractProductA();
		virtual ~AbstractProductA();

		virtual void operation() = 0;
};

class ProductA_1 : public AbstractProductA {
	public:
		ProductA_1();
		virtual ~ProductA_1();

		virtual void operation();
};

class ProductA_2 : public AbstractProductA {
	public:
		ProductA_2();
		virtual ~ProductA_2();

		virtual void operation();
};

#endif
