#ifndef TARGET_H
#define TARGET_H

class Target {
	public:
		Target() {
		}

		virtual ~Target() {
		}

		virtual void Request() = 0;
};
#endif
