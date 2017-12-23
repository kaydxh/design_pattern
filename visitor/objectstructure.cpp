#include "objectstructure.h"

ObjectStructure::ObjectStructure() {
}

ObjectStructure::~ObjectStructure() {
}

void ObjectStructure::attach(Element* elem) {
	elems_.push_back(elem);
}

void ObjectStructure::detach(Element* elem) {
	for (size_t i = 0; i < elems_.size(); ++i) {
		if (elems_[i] == elem) {
			swap(elems_[i], elems_.back());
			elems_.pop_back();
		}
	}
}

void ObjectStructure::accept(Visitor* visit) {
	for (vector<Element*>::const_iterator it = elems_.begin();
			it != elems_.end(); ++it) {
		(*it)->Accept(visit);
	}
}
