#ifndef HANDLER_H
#define HANDLER_H

#include <stdio.h>

class Handler {
	public:
		Handler(Handler* successor = NULL);
		virtual ~Handler();

		virtual void HandleRequest(int) = 0;
	protected:
		Handler* successor_;
};
#endif
