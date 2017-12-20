#include "proxy.h"
#include <stdio.h>

int main() {
	Subject* p = new Proxy();
	p->Request();

	delete p;
	p = NULL;
}
