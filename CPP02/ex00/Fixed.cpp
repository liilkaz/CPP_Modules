#include "Fixed.hpp"

const int Fixed::lit = 8;

Fixed::Fixed(){
	std::cout << "Default constructor called" << std::endl;
	raw = 0;
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
	std::cout << "setRawBits member function called"  << std::endl;
	this->raw = raw;
}

int Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called"  << std::endl;
	return raw;
}

