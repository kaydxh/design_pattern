#ifndef COMPONENT_H
#define COMPONENT_H

class Component {
	public:
		Component();
		virtual ~Component();

		virtual void operation() = 0;
};

//需要给它添加动态职责的类
class ConcreteComponent : public Component {
	public:
		ConcreteComponent();
		virtual ~ConcreteComponent();

		virtual void operation();
};
#endif
