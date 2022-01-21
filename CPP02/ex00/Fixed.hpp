#ifndef FIXED_HPP
# define FIXED_HPP
#include <iostream>

class Fixed {
	private:
		int raw;
		static const int lit;

	public:
		Fixed();
		Fixed(const Fixed &fix);
		~Fixed();
		void setRawBits(int const raw);
		int getRawBits(void) const;
		Fixed &operator=(const Fixed &fix);
};

#endif