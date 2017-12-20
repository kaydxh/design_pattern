#ifndef SUBJECT_H
#define SUBJECT_H

class Subject {
	public:
		Subject();
		virtual ~Subject();

	virtual	void Request() = 0;
};

class RealSubject : public Subject {
	public:
		RealSubject();
		virtual ~RealSubject();

		virtual void Request();
};
#endif
