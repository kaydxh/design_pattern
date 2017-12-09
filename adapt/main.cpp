#include "adapter.h"
#include <stdlib.h>

int main() {
	Adaptee* adaptee = new Adaptee();
	Adapter* adapter = new Adapter(adaptee);
	adapter->Request();

	delete adaptee;
	adaptee = NULL;
	delete adapter;
	adapter = NULL;
}
