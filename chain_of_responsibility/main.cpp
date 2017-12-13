#include "concretehandler.h"
#include <stdio.h>

int main() {
	Handler* ha = new ConcreteHandlerA();
	Handler* hb = new ConcreteHandlerB(ha);

	hb->HandleRequest(300);
	hb->HandleRequest(800);
	
	hb->HandleRequest(1500);
	delete hb;
	hb = NULL;
}
