#include "Animal.hpp"

Animal::Animal() : type("Animal") {
    std::cout << "\033[33m" << "ANIMAL: Default constructor called" << "\033[0m" << std::endl;
}

Animal::Animal(const std::string &type) :type(type){}

Animal::~Animal(){
    std::cout << "\033[33m" << "ANIMAL: Destructor called" << "\033[0m" << std::endl;
}

Animal::Animal(const Animal &animal){
    std::cout << "\033[33m" << "ANIMAL: Copy constructor called" << "\033[0m" << std::endl;
    *this = animal;
}

Animal &Animal::operator=(const Animal &animal) {
    if (this != &animal) {
        this->type = animal.type;
    }
    return *this;
}

void Animal::setType(std::string type){
    this->type = type;
}

std::string Animal::getType() const{
    return type;
}

const char *Animal::makeSound() const{
    return "shhh";
}

