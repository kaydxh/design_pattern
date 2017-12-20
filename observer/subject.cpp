#include "subject.h"
#include <iostream>
using namespace std;

Subject::Subject() {
}

Subject::~Subject() {
}

void Subject::Attach(Observer* observer) {
	observers_.push_back(observer);
	cout << "attach observer:" << observer << endl;
}


void Subject::Detach(Observer* observer) {
	for (size_t i = 0; i < observers_.size(); ++i) {
		if (observers_[i] == observer) {
			swap(observers_[i], observers_.back());
			observers_.pop_back();
			cout << "detach observer:" << observer << endl;
			return;
		}
	}

	cout << "no this observer: " << observer << endl;
}

void Subject::Notify() {
	for (size_t i = 0; i < observers_.size(); ++i) {
		observers_[i]->update(this);
	}
}

ConcreteSubject::ConcreteSubject() 
	: m_subjectState_(-1) {
}

ConcreteSubject::~ConcreteSubject() {
}

void ConcreteSubject::SetState(int state) {
	m_subjectState_ = state;
	cout << "setstate state:" << m_subjectState_ << endl;
}

int ConcreteSubject::GetState() {
	cout << "GetState state:" << m_subjectState_ << endl;
	return m_subjectState_;
}
