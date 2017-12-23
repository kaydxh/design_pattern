#ifndef OBJECT_STRUCTURE_H
#define OBJECT_STRUCTURE_H

#include "element.h"
#include "visitor.h"
#include <vector>
using namespace std;

class ObjectStructure {
	public:
		ObjectStructure();
		~ObjectStructure();

		void attach(Element* elem);
		void detach(Element* elem);

		void accept(Visitor* visit);
	private:
		vector<Element*> elems_;
};
#endif 
