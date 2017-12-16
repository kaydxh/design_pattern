#include "command.h"
#include <stdlib.h>

Command::Command() {
}

Command::~Command() {
}

ConcreteCommand::ConcreteCommand(Receiver* receiver)
	: receiver_(receiver) {
}

ConcreteCommand::~ConcreteCommand() {
}

void ConcreteCommand::Execute() {
	if (NULL != receiver_) {
		receiver_->Action();
	}
}
