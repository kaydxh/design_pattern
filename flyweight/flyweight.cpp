#include "flyweight.h"
#include <iostream>
using namespace std;

FlyWeight::FlyWeight(const string& state)
	: state_(state) {
}

FlyWeight::~FlyWeight() {
}

string FlyWeight::GetIntrinsicState() {
	return state_;
}

ConcreteFlyWeight::ConcreteFlyWeight(const string& state) 
	: FlyWeight(state) {
}

ConcreteFlyWeight::~ConcreteFlyWeight() {
}

void ConcreteFlyWeight::operation(const string& extrinsicState) {
	cout << "extrinsicState: " << extrinsicState << ", \
		intrinsicState: " << GetIntrinsicState() << endl;

}
