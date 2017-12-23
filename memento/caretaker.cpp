#include "caretaker.h"
#include "memento.h"

CareTake::CareTake() {
}

CareTake::~CareTake() {
}

void CareTake::SetMemento(Memento* memento) {
	memento_ = memento;
}

Memento* CareTake::GetMemento() {
	return memento_;
}

