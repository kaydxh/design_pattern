#ifndef TEMPLATEMETOD_H
#define TEMPLATEMETOD_H

class AbstractClass {
	public:
		AbstractClass();
		virtual ~AbstractClass();

		 void TemplateMethod();

	protected:
		 virtual void PrimitiveMethodA() = 0;
		 virtual void PrimitiveMethodB() = 0;
};

class ConcreteClass : public AbstractClass {
	public:
		ConcreteClass();
		virtual ~ConcreteClass();

	protected:
		virtual void PrimitiveMethodA();
		virtual void PrimitiveMethodB();
};

#endif
