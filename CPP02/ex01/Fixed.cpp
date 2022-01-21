#include "Fixed.hpp"

const int Fixed::lit = 8;

Fixed::Fixed(){
	std::cout << "Default constructor called" << std::endl;
	raw = 0;
}

Fixed::Fixed(const int in_t) {
	std::cout << "Int constructor called" << std::endl;
	raw = in_t << lit;
}

Fixed::Fixed(const float floa_t) {
	std::cout << "Float constructor called" << std::endl;
	raw = roundf(floa_t * (1 << lit));
}

Fixed::Fixed(const Fixed &fix){
	std::cout << "Copy constructor called" << std::endl;
	*this = fix;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &fix) {
	std::cout << "Assignation operator called" << std::endl;
	if (this == &fix)
		return *this;
	raw = fix.getRawBits();
	return *this;
}

void Fixed::setRawBits(int const raw) {
	std::cout << "setRawBits member function called" << std::endl;
	this->raw = raw;
}

int Fixed::getRawBits(void) const {
	return raw;
}

float Fixed::toFloat(void) const {
	return (float)raw / (float)(1 << lit);
}

int Fixed::toInt(void) const {
	return raw >> lit;
}

std::ostream &operator<<(std::ostream &out, const Fixed &fix) {
	out << fix.toFloat();
	return out;
}
