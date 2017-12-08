#ifndef DIRECTOR_H
#define DIRECTOR_H

#include "builder.h"

class Director {
	public:
		Director(AbstractBuilder* build);
		~Director();

		void Construct();

	private:
		AbstractBuilder* build_;
};
#endif
