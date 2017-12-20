#ifndef ITERATOR_H
#define ITERATOR_H

class Aggregate;
class Iterator {
	public:
		Iterator();
		virtual ~Iterator();

		virtual void First() = 0;
		virtual void Next() = 0;
		virtual bool IsDone() = 0;
		virtual int CurrentItem() = 0;
};

class ConcreteIterator : public Iterator {
	public:
		ConcreteIterator(Aggregate* aggre);
		virtual ~ConcreteIterator();

		virtual void First();
		virtual void Next();
		virtual bool IsDone();
		virtual int CurrentItem();
		
	private:
		Aggregate* aggre_;
		int index_;
};
#endif 
