#ifndef DECORATOR_H
#define DECORATOR_H

#include "component.h"

class Decorator : public Component {
	public:
		Decorator(Component* comp);
		virtual ~Decorator();

		virtual void operation();
	protected:
		Component* comp_;
};

//CooncerteDecorator为ConcreteComponent动态添加职责的类
class ConcreteDecorator : public Decorator {
	public:
		ConcreteDecorator(Component* comp);
		virtual ~ConcreteDecorator();

		virtual void operation();
	private:
		void addBehavior();
};
#endif
