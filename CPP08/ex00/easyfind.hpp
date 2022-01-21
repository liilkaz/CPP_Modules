#ifndef EASYFIND_HPP
# define EASYFIND_HPP
#include <algorithm>
#include <iostream>

class ErrorValue : public std::exception {
	public:
		ErrorValue(std::string const &msg) : msg(msg) {}
		virtual ~ErrorValue() throw() {}
		virtual const char* what() const throw() {return msg.c_str();}
	private:
		ErrorValue() {}
		std::string msg;
};

template<typename T>
typename T::iterator easyfind(T &t, int n) {
	typename T::iterator it;
	it = find(t.begin(), t.end(), n);
		if (it == t.end()) {
			throw ErrorValue("Element is not found");
		}
	return it;
}

#endif