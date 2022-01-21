#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

//ЧЕКЛИСТ
/*
class Awesome {
	public:
		Awesome(void) : _n(42) {return; }
		int get(void) const {return this->_n; }
	private:
		int _n;
};

std::ostream &operator<<(std::ostream &o, Awesome const &rhs) {o<<rhs.get(); return o; }

template<typename T>
void print(T const &x) {std::cout << x << std::endl; return; }
*/

template <typename T>
void iter(T *arr, size_t len, void ft(T &elem)) {
	for (size_t i = 0; i < len; i++) {
		ft(arr[i]);
	}
}

template <typename T>
void func(T &elem) {
	elem += 1;
}

#endif