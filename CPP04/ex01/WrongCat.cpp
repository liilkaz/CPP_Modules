#include "WrongCat.hpp"

WrongCat::WrongCat() {
	std::cout << "\033[32m" << "WRONGCAT: Default constructor called" << "\033[0m" << std::endl;
	this->wrong_type = "Caaaat"; }

WrongCat::~WrongCat() {
	std::cout << "\033[32m" << "WRONGCAT: Destructor called" << "\033[0m" << std::endl;
}

WrongCat::WrongCat(const WrongCat &wrong_cat){
	std::cout << "\033[32m" << "WRONGCAT: Copy constructor called" << "\033[0m" << std::endl;
	*this = wrong_cat;
}

WrongCat &WrongCat::operator=(const WrongCat &wrong_cat) {
	if (this != &wrong_cat) {
		this->wrong_type = wrong_cat.wrong_type;
	}
	return *this;
}

const char *WrongCat::makeSound() const { return "Meow"; }