#ifndef CONCRETEHANDLER_H
#define CONCRETEHANDLER_H

#include "handler.h"

class ConcreteHandlerA : public Handler {
	public:
		ConcreteHandlerA(Handler* successor = NULL);
		virtual ~ConcreteHandlerA();
		
		virtual void HandleRequest(int);
};

class ConcreteHandlerB : public Handler {
	public:
		ConcreteHandlerB(Handler* successor = NULL);
		virtual ~ConcreteHandlerB();
		
		virtual void HandleRequest(int);
};
#endif
