#ifndef COMPOSITE_H
#define COMPOSITE_H

#include "component.h"
#include <vector>
#include <string>
using namespace std;

class Composite : public Component {
	public:
		Composite(const string& name);
		virtual ~Composite();

		virtual void Add(Component*);

		virtual void Remove(Component*);
		virtual Component* GetChild(int index);

		virtual void operation();

	private:
		vector<Component*> components_;
};
#endif 
