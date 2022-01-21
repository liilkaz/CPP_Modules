#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>

template <typename T>
class Array {
	private:
		unsigned int n;
		T *data;
	public:
		Array() { 
			n = 0;
			data = nullptr;
		} //создает пустой массив

		Array(unsigned int n) {
			this->n = n;
			data = new T[n];
		} //создает массив из n элементов, инициализированных по умолчанию

		~Array(){
			if (this->data != NULL) {
				delete[] data;
			}
		}

		Array(const Array &ar) {
			n = ar.n;
			data = new T[n];
		
			for (unsigned int i = 0; i < n; i++) {
				data[i] = ar.data[i];
			}
		}

		Array &operator=(const Array &ar) {
			if (this != &ar) {
				if (data) {
					delete[] data;
				}
				n = ar.n;
				data = new T[n];

				for (unsigned int i = 0; i < n; i++) {
					data[i] = ar.data[i];
				}
			}
			return *this;
		} 

		class Limits : public std::exception {
			public:
				Limits(std::string const &msg) : msg(msg) {}
				virtual ~Limits() throw() {}
				virtual const char* what() const throw() {return msg.c_str();}
			private:
				Limits() {}
				std::string msg;
		};

		T &operator[](unsigned int index) {
			if (index >= n) {
				throw Limits("this element is out of the limits");
			}
			return data[index];
		}
		
		unsigned int size() {return n;}
};

#endif