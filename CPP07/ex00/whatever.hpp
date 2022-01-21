#ifndef WHATEVER_HPP
# define WHATEVER_HPP

/*
//из чеклиста
class Awesome {
	public:
		Awesome(void) : _n(0) {}
		Awesome(int n) : _n(n) {}
		Awesome &operator= (Awesome &a) {_n=a._n; return *this;}
		bool operator==(Awesome const &rhs) const {return (this->_n == rhs._n);}
		bool operator!=(Awesome const &rhs) const {return (this->_n != rhs._n);}
		bool operator>(Awesome const &rhs) const {return (this->_n > rhs._n);}
		bool operator<(Awesome const &rhs) const {return (this->_n < rhs._n);}
		bool operator>=(Awesome const &rhs) const {return (this->_n >= rhs._n);}
		bool operator<=(Awesome const &rhs) const {return (this->_n <= rhs._n);}
		int get_n() const {return _n; }
	private:
		int _n;
};
std::ostream &operator<<(std::ostream &o, const Awesome &a) {o << a.get_n(); return o;}
*/

template <typename T>
void swap(T &a, T &b) {
	T c;
	c = a;
	a = b;
	b = c;
}

template <typename T> 
T min(T a, T b) {
	return a >= b ? b : a;
}

template <typename T>
T max(T a, T b) {
	return a <= b ? b : a;
}

#endif