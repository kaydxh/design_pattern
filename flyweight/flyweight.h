#ifndef FLYWEIGHT_H
#define FLYWEIGHT_H

#include <string>
using namespace std;

class FlyWeight {
	public:
		virtual ~FlyWeight();

		string GetIntrinsicState();
		virtual void operation(const string& extrinsicState) = 0;

	protected:
		FlyWeight(const string& state);


	private:
		string state_;
};

class ConcreteFlyWeight : public FlyWeight {
	public:
		ConcreteFlyWeight(const string& state);
		virtual ~ConcreteFlyWeight();

		virtual void operation(const string& extrinsicState);
};
#endif
