#ifndef ABSTRACTION_H
#define ABSTRACTION_H

#include "implementor.h"

class Abstraction {
	public:
		Abstraction() {
		}

		virtual ~Abstraction() {

		}

		virtual void operation() = 0;
};

class RefinedAbstraction : public Abstraction {
	public:
		RefinedAbstraction(Implementor*);
		virtual ~RefinedAbstraction();

		virtual void operation();
	private:
		Implementor* impl_;
};
#endif
