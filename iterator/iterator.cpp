#include "iterator.h"
#include "aggregate.h"

Iterator::Iterator() {
}

Iterator::~Iterator() {
}

ConcreteIterator::ConcreteIterator(Aggregate* aggre)
	: aggre_(aggre),
	  index_(0) {
}

ConcreteIterator::~ConcreteIterator() {
}

void ConcreteIterator::First() {
	index_ = 0;
}

void ConcreteIterator::Next() {
	index_++;
}

bool ConcreteIterator::IsDone() {
	return index_ == aggre_->GetSize();//最后一个是index == aggre_->Getsize() - 1
}

int ConcreteIterator::CurrentItem() {
	return aggre_->GetItem(index_);
}
