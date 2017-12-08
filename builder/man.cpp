#include "director.h"
#include <stdlib.h>

int main() {
	AbstractBuilder* builder = new ConcertBuilder();
	Director* director = new Director(builder);
	director->Construct();

	delete builder;
	builder = NULL;
	delete director;
	director = NULL;
}
