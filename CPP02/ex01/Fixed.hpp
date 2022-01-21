#ifndef FIXED_HPP
# define FIXED_HPP
#include <iostream>
#include <cmath>

class Fixed {
	private:
		int raw;
		static const int lit;

	public:
		Fixed();
		Fixed(const Fixed &fix);
		Fixed(const int in_t);
		Fixed(const float floa_t);
		~Fixed();
		void setRawBits(int const raw);
		int getRawBits(void) const;

		float toFloat(void) const;
		int toInt(void) const; 

		Fixed &operator=(const Fixed &fix);

};

std::ostream &operator<<(std::ostream &out, const Fixed &fix);

#endif