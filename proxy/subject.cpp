#include "subject.h"
#include <iostream>
using namespace std;

Subject::Subject() {
}

Subject::~Subject() {
}

RealSubject::RealSubject() {
}

RealSubject::~RealSubject() {
}

void RealSubject::Request() {
	cout << "RealSubject Request" << endl;
}


