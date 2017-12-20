#include "proxy.h"
#include <stdlib.h>

Proxy::Proxy() 
	: subject_(NULL) {

}

Proxy::~Proxy() {
	if (subject_) {
		delete subject_;
		subject_ = NULL;
	}
}

void Proxy::Request() {
	if (subject_ == NULL) {
		subject_ = new RealSubject();
	} 
	subject_->Request();
}
