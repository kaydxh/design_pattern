#ifndef ORIGINATOR_H
#define ORIGINATOR_H
#include <string>
using namespace std;

class Memento;
class Originator {
	public:
		Originator(const string& state);
		~Originator();

		Memento* CreateMemento();
		string GetState();
		void SetState(const string& state);

		void RestoreState(Memento* memento);

		void PrintState();
	private:
		string state_;
};

#endif
