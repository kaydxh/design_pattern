#ifndef CARETAKE_H
#define CARETAKE_H

class Memento;
class CareTake {
	public:
		CareTake();
		~CareTake();

		void SetMemento(Memento* memento);

		Memento* GetMemento();

	private:
		Memento* memento_;
};
#endif 
