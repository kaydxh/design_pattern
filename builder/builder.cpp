#include "builder.h"
#include <iostream>
using namespace std;

AbstractBuilder::AbstractBuilder() {
}

AbstractBuilder::~AbstractBuilder() {
}

ConcertBuilder::ConcertBuilder() {
}

ConcertBuilder::~ConcertBuilder() {
}

void ConcertBuilder::buildPartA() {
	cout << "buildPartA" << endl;
}

void ConcertBuilder::buildPartB() {
	cout << "buildPartB" << endl;
}
