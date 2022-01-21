#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP
#include <iostream>
# include <stack>

template <typename T>
class MutantStack : public std::stack<T> {
	public:
		MutantStack() {};
		~MutantStack() {};
		MutantStack(const MutantStack &mstack) : std::stack<T>(mstack) {(void)mstack;};
		MutantStack &operator=(const MutantStack &mstack) {(void)mstack; return *this;};

		typedef typename std::stack<T>::container_type::iterator iterator;

		iterator begin() {return (std::stack<T>::c.begin());}
		iterator end() {return (std::stack<T>::c.end());}
		iterator rbegin() {return (std::stack<T>::c.rbegin());}
		iterator rend() {return (std::stack<T>::c.rend());}
};

#endif