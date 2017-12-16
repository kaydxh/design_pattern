#ifndef FLYWEIGHT_FACTORY_H
#define FLYWEIGHT_FACTORY_H

#include "flyweight.h"
#include <vector>
using namespace std;

class FlyWeightFactory {
	public:
		FlyWeightFactory();
		virtual ~FlyWeightFactory();

		FlyWeight* GetFlyWeight(const string& state);

	private:
		vector<FlyWeight*> flyweights_;
};
#endif 
