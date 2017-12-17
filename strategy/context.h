#ifndef CONTEXT_H
#define CONTEXT_H

#include "strategy.h"

class Context {
	public:
		Context();
		~Context();

		void setStrategy(Strategy*);
		void ContextInterface();

	private:
		Strategy* strategy_;
};


#endif
