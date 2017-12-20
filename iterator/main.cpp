#include "iterator.h"
#include "aggregate.h"

#include <iostream>
using namespace std;

int main() {
	int n = 4;
	Aggregate* aggre = new ConcreteAggregate(4);
	
	for (int i = 0; i < n; ++i) {
		aggre->SetItem(i,i+1);
	}

	Iterator* iter = aggre->CreateIterator();
	for (; false == iter->IsDone(); iter->Next()) {
		cout << iter->CurrentItem() << endl;
	}
}
