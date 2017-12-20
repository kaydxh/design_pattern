#include "aggregate.h"
#include "iterator.h"
#include <stdio.h>

Aggregate::Aggregate() {
}

Aggregate::~Aggregate() {
}


ConcreteAggregate::ConcreteAggregate(int size)
	: size_(size),
	  data_(NULL) {
	data_ = new int[size_];
}

ConcreteAggregate::~ConcreteAggregate() {
	if (data_ != NULL) {
		delete data_;
		data_ = NULL;
	}
}

Iterator* ConcreteAggregate::CreateIterator() {
	return new ConcreteIterator(this);
}

int ConcreteAggregate::GetSize() {
	return size_;
}

int ConcreteAggregate::GetItem(int index) {
	if (size_ > index) {
		return data_[index];
	}

	return -1;
}

int ConcreteAggregate::SetItem(int index, int n) {
	if (size_ > index) {
		data_[index] = n;
		return n;
	}

	return -1;
}
