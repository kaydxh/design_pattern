#ifndef BUILDER_H
#define BUILDER_H

class AbstractBuilder {
	public:
		AbstractBuilder();
		virtual ~AbstractBuilder ();

		virtual void buildPartA() = 0;
		virtual void buildPartB() = 0;
};

class ConcertBuilder : public AbstractBuilder {
	public:
		ConcertBuilder();
		virtual ~ConcertBuilder();

		virtual void buildPartA();
		virtual void buildPartB();
};
#endif
