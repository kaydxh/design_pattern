#include "flyweightfactory.h"
#include <iostream>
using namespace std;

FlyWeightFactory::FlyWeightFactory() {
}

FlyWeightFactory::~FlyWeightFactory() {
	for (size_t i = 0; i < flyweights_.size(); ++i) {
		delete flyweights_[i];
	}

	flyweights_.clear();
}

FlyWeight* FlyWeightFactory::GetFlyWeight(const string& state) {
	for (size_t i = 0; i < flyweights_.size(); ++i) {
		if (flyweights_[i]->GetIntrinsicState() == state) {
			cout << "the flyweight: " << state << " alreadly exits" << endl;
			return flyweights_[i];
		}
	}

	cout << "create new flyweight: " << state <<  endl;
	FlyWeight* fly = new ConcreteFlyWeight(state);
	flyweights_.push_back(fly);

	return fly;
}


