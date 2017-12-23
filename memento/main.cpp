#include "originator.h"
#include "caretaker.h"
#include <iostream>
using namespace std;

int main() {
	Originator*  orig = new Originator("state 1");
	CareTake* ct = new CareTake();
	ct->SetMemento(orig->CreateMemento());
	orig->PrintState();

	orig->SetState("state 2");
	orig->PrintState();
	orig->RestoreState(ct->GetMemento());
	orig->PrintState();

	delete orig;
	orig = NULL;
	delete ct;
	ct = NULL;
}
