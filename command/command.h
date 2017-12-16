#ifndef COMMAND_H
#define COMMAND_

#include "receiver.h"

class Command {
	public:
		Command();
		virtual ~Command();

		virtual void Execute() = 0;
};

class ConcreteCommand : public Command {
	public:
		ConcreteCommand(Receiver*);
		virtual ~ConcreteCommand();

		virtual void Execute();

	private:
		Receiver* receiver_;

};
#endif
