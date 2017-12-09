#ifndef ADAPTER_H
#define ADAPTER_H

#include "target.h"
#include "adaptee.h"

class Adapter : public Target {
	public:
		Adapter(Adaptee* adaptee);
		virtual ~Adapter();

		virtual void Request();

	private:
		Adaptee* adaptee_;
};

#endif 
