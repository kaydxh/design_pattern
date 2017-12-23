#ifndef MEMEMTO_H
#define MEMEMTO_H

#include <string>
using namespace std;

class Memento {
	public:
		Memento(const string& state);
		~Memento();

		string GetState();
		void  SetState(const string& state);

	private:
		string state_;
};
#endif 
