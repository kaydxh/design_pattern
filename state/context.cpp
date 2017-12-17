#include "context.h"
#include "state.h"
#include <stdio.h>


Context::Context(State* state)
	: state_(state) {
}

Context::~Context() {
	if (state_ != NULL) {
		delete state_;
		state_ = NULL;
	}
}

void Context::ChangeState(State* state) {
	if (state_ != NULL) {
		delete state_;
		state_ = NULL;
	}

	state_ = state;
}

void Context::Request() {
	if (state_ != NULL) {
		state_->Handle(this);
	}
}
