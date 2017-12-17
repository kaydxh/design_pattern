#include "subject.h"

int main() {
	Observer* obs1 = new ConcreteObserver();
	Observer* obs2 = new ConcreteObserver();

	Subject* sub = new ConcreteSubject;
	sub->Attach(obs1);
	sub->Attach(obs2);
	sub->SetState(2);
	sub->Notify();

	sub->Detach(obs1);
	sub->SetState(10);
	sub->Notify();

	delete obs1;
	delete obs2;
	delete sub;
}
