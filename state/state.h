#ifndef STATE_H
#define STATE_H

class Context;
class State {
	public:
		State();
		virtual ~State();

	virtual	void Handle(Context* ctx) = 0;
};

class ConcreteStateA : public State {
	public:
		ConcreteStateA();
		virtual ~ConcreteStateA();

	virtual void Handle(Context* ctx);
	
};

class ConcreteStateB : public State {
	public:
		ConcreteStateB();
		virtual ~ConcreteStateB();

	virtual	void Handle(Context* ctx);
};
#endif
