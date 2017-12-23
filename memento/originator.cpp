#include "originator.h"
#include "memento.h"
#include <iostream>
using namespace std;

Originator::Originator(const string& state) 
	: state_(state) {
}

Originator::~Originator() {
}

Memento* Originator::CreateMemento() {
	return new Memento(state_);
}

string Originator::GetState() {
	return state_;
}

void Originator::SetState(const string& state) {
	state_ = state;
}

void Originator::RestoreState(Memento* memento) {
	state_ = memento->GetState();
}

void Originator::PrintState() {
	cout << "state_:" << state_ << endl;
}

