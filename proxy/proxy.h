#ifndef PROXY_H
#define PROXY_H

#include "subject.h"

class Proxy : public Subject {
	public:
		Proxy();
		virtual ~Proxy();

		virtual void Request();

	private:
		Subject* subject_;
};

#endif 
