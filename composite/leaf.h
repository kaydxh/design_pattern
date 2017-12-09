#ifndef LEAF_H
#define LEAF_H

#include "component.h"

class Leaf : public Component {
	public:
		Leaf(const string& name);
		virtual ~Leaf();

		virtual void operation();
};

#endif 
