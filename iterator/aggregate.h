#ifndef AGGREGATE_H
#define AGGREGATE_H

class Iterator;
class Aggregate {
	public:
		Aggregate();
		virtual ~Aggregate();

		virtual Iterator* CreateIterator() = 0;
		virtual int GetSize() = 0;
		virtual int GetItem(int index) = 0;
		virtual int SetItem(int index, int n) = 0;
};

class ConcreteAggregate : public Aggregate {
	public:
		ConcreteAggregate(int size);
		virtual ~ConcreteAggregate();

		virtual Iterator* CreateIterator();
		virtual int GetSize();
		virtual int GetItem(int index);
		virtual int SetItem(int index, int n);

	private:
		int size_;
		int *data_;
};
#endif
