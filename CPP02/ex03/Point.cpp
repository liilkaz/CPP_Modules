#include "Point.hpp"

Point::Point() : x(0), y(0) {}

Point::~Point() {
}

Point::Point(const Point &poin) : x(poin.x), y(poin.y) {
}

Point::Point(const float a, const float b) : x(a), y(b) {	
}

Fixed Point::getX(void) const{
	return this->x;
}

Fixed Point::getY(void) const{
	return this->y;
}

Point &Point::operator=(const Point &poin) {
	if (this == &poin)
		return *this;
	*(const_cast<Fixed*>(&x)) = poin.x;
	*(const_cast<Fixed*>(&y)) = poin.y;
	return *this;
}
