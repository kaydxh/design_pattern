#ifndef OBSERVER_H
#define OBSERVER_H

class Subject;

class Observer {
	public:
		Observer();
		virtual ~Observer();

		virtual void update(Subject*) = 0;

};

class ConcreteObserver : public Observer {
	public:
		ConcreteObserver();
		virtual ~ConcreteObserver();

		virtual void update(Subject*);

	protected:
		int objectState_;
	
};
#endif
