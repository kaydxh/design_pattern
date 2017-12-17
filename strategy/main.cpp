#include "context.h"

int main() {
	Strategy* s = new ConcreteStartege();
	Context* c = new Context();
	c->setStrategy(s);
	c->ContextInterface();

	delete s;
	delete c;
}
