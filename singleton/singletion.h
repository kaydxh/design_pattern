#ifndef SINGLETON_H
#define SINGLETON_H

#include <stdlib.h>
#include <pthread.h>

template <typename T>
class Singleton {
	public:
		static T& Instance() {
			if (instance_ == NULL) {
				pthread_mutex_lock(&mutex_);
				if (instance_ == NULL) {
					instance_ = new T();
					::atexit(destroy);
				}
				pthread_mutex_unlock(&mutex_);
			}

			return *instance_;
		}

	private:
		static void destroy() {
		//	typedef char T_muxt_be_complete_type[sizeof(T) == 0 ? -1 : 1];
		//	T_muxt_be_complete_type dumpy; (void)dumpy;

		//	delete dumpy;
		//	dumpy = NULL;
			if (instance_) {
				delete instance_;
				instance_ = NULL;
			}
			pthread_mutex_destroy(&mutex_);
		}
		Singleton() {
		}

		~Singleton() {
		}

	private:
		static pthread_mutex_t mutex_;
		static T* volatile instance_;

};

template <typename T>
pthread_mutex_t Singleton<T>::mutex_ = PTHREAD_MUTEX_INITIALIZER;

template <typename T>
T* volatile Singleton<T>::instance_ = NULL;


#endif
