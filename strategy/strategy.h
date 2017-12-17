#ifndef STARTEGY_H
#define STARTEGY_H

class Strategy {
	public:
		Strategy();
		virtual ~Strategy();

		virtual void AlgorithmnInterface() = 0;
};

class ConcreteStartege : public Strategy {
	public:
		ConcreteStartege();
		~ConcreteStartege();

		virtual void AlgorithmnInterface();
};
#endif
