#include "memento.h"

Memento::Memento(const string& state)
	: state_(state) {
}

Memento::~Memento() {
}

string Memento::GetState() {
	return state_;
}

void Memento::SetState(const string& state) {
	state_ = state;
}
