#include "singletion.h"
#include <stdio.h>
#include <iostream>
using namespace std;

class Test {
	public:
		Test() {
			cout << "construct Test" << endl;
		}

		~Test() {
			cout << "destruct Test" << endl;
		}

		Test(const Test& rhs) {
			cout << "copy Test" << endl;
		}

		Test& operator=(const Test& rhs) {
			if (this != &rhs) {
				cout << "operator = " << endl;
			} else {
				cout << "self" << endl;
			}

			return *this;
			 
		}
};

int main() {
	Test s = Singleton<Test>::Instance();
		s = Singleton<Test>::Instance();
	printf("s:%p, s1:%p\n", &Singleton<Test>::Instance(), &Singleton<Test>::Instance());

}
