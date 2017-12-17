#ifndef CONTEXT_H
#define CONTEXT_H

class State;
class Context {
	public:
		Context(State* state);
		virtual ~Context();

		void ChangeState(State* state);

		void Request();
	private:
		State* state_;
};
#endif 
