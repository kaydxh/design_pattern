#include "context.h"
#include "state.h"
#include <stdio.h>

int main() {
	//State* st在改变状态的时候会自动delete，最后一个State*在Context的析构中delete
	State* st = new ConcreteStateA();
	Context* ctx = new Context(st);

	ctx->Request();
	ctx->Request();
	ctx->Request();

	delete ctx;
	ctx = NULL;
	
}
