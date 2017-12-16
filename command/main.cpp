#include "invoker.h"
#include <stdio.h>

int main() {
	Receiver* receiver = new Receiver();
	Command* cmd = new ConcreteCommand(receiver);
	Invoker* invok = new Invoker(cmd);
	invok->call();

	delete receiver;
	receiver = NULL;
	delete cmd;
	cmd = NULL;
	delete invok;
	invok = NULL;
}
