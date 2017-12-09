#ifndef IMPLEMENTOR_H
#define IMPLEMENTOR_H

class Implementor {
	public:
		Implementor();
		
		virtual ~Implementor();

		virtual void operation() = 0;
};

class ConcreteImplementorA : public Implementor {
	public:
		ConcreteImplementorA();
		virtual ~ConcreteImplementorA();

		virtual void operation();
};
#endif 
