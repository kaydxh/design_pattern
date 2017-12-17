#ifndef SUBJECT_H
#define SUBJECT_H

#include <vector>
using namespace std;

#include "observer.h"

class Subject {
	public:
		Subject();
		virtual ~Subject();

		void Attach(Observer* observer);
		void Detach(Observer* observer);

		void Notify();

		virtual void SetState(int state) = 0;
		virtual int GetState() = 0;
	protected:
		int m_subjectState_;
		vector<Observer*> observers_;
};

class ConcreteSubject : public Subject {
	public:
		ConcreteSubject(); 
		virtual ~ConcreteSubject();

		virtual void SetState(int state);
		virtual int GetState();
};
#endif 
