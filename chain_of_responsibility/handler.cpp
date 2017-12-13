#include "handler.h"
#include <stdio.h>

Handler::Handler(Handler* successor)
	: successor_(successor) {
}

Handler::~Handler() {
	if (successor_) {
		delete successor_;
		successor_ = NULL;
	}
}




