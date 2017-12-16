#include "invoker.h"

#include <stdlib.h>

Invoker::Invoker(Command* cmd)
	:cmd_(cmd) {
}

Invoker::~Invoker() {
}

void Invoker::call() {
	if (cmd_ != NULL) {
		cmd_->Execute();
	}
}
