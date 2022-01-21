#include "Fixed.hpp"

const int Fixed::lit = 8;

Fixed::Fixed(){
	raw = 0;
}

Fixed::Fixed(const int in_t) {
	raw = in_t << lit;
}

Fixed::Fixed(const float floa_t) {
	raw = roundf(floa_t * (1 << lit));
}

Fixed::Fixed(const Fixed &fix){
	*this = fix;
}

Fixed::~Fixed() {}

Fixed &Fixed::operator=(const Fixed &fix) {
	if (this == &fix)
		return *this;
	raw = fix.getRawBits();
	return *this;
}

bool Fixed::operator>(const Fixed &fix) {
	return this->raw > fix.raw;
}

bool Fixed::operator<(const Fixed &fix) {
	return this->raw < fix.raw;
}

bool Fixed::operator>=(const Fixed &fix) {
	return this->raw >= fix.raw;
}

bool Fixed::operator<=(const Fixed &fix) {
	return this->raw <= fix.raw;
}

bool Fixed::operator==(const Fixed &fix) {
	return this->raw == fix.raw;
}

bool Fixed::operator!=(const Fixed &fix) {
	return !(this->raw == fix.raw);
}

Fixed Fixed::operator+(const Fixed &fix) {
	Fixed nfix;
	nfix.setRawBits(this->raw + fix.raw);
	return nfix;
}

Fixed Fixed::operator-(const Fixed &fix) {
	Fixed nfix;
	nfix.setRawBits(this->raw - fix.raw);
	return nfix;
}

Fixed Fixed::operator*(const Fixed &fix) {
	Fixed nfix(this->toFloat() * fix.toFloat());
	return nfix;
	
}

Fixed Fixed::operator/(const Fixed &fix) {
	float a;
	float b;

	a = this->toFloat();
	b = fix.toFloat();

	Fixed nfix(a / b);
	return nfix;
}


Fixed &Fixed::operator++() {
	this->raw++;
	return *this;
}

Fixed &Fixed::operator--() {
	this->raw--;
	return *this;
}

Fixed Fixed::operator++(int) {
	Fixed tmp = *this;
	++(this->raw);
	return tmp;
}

Fixed Fixed::operator--(int) {
	Fixed tmp = *this;
	--(this->raw);
	return tmp;
}


void Fixed::setRawBits(int const raw) {
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

Fixed &Fixed::min (Fixed &a, Fixed &b) {
	return a > b ? b : a;
}

Fixed &Fixed::max (Fixed &a, Fixed &b) {
	return a > b ? a : b;
}

const Fixed &Fixed::min (const Fixed &a, const Fixed &b) {
	return a.getRawBits() > b.getRawBits() ? b : a;
}

const Fixed &Fixed::max (const Fixed &a, const Fixed &b) {
	return a.getRawBits() > b.getRawBits() ? a : b;
}


std::ostream &operator<<(std::ostream &out, const Fixed &fix) {
	out << fix.toFloat();
	return out;
}
