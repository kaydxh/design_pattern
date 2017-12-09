#ifndef COMPONENT_H
#define COMPONENT_H

#include <string>
using namespace std;

class Component {
	public:
		Component(const string& name);
		virtual ~Component();

		virtual void Add(Component*);
		virtual void Remove(Component*);
		virtual Component* GetChild(int index);

		virtual void operation() = 0; 

	protected:
		string name_;
};


#endif
