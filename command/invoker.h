#ifndef INVOKER_H
#define INVOKER_H

#include "command.h"
class Invoker {
	public:
		Invoker(Command* cmd);
		~Invoker();

		void call();
	private:
		Command* cmd_;
};
#endif 
