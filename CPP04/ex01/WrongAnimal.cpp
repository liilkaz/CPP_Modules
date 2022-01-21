#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : wrong_type("Animal") {
    std::cout << "\033[33m" << "WRONGANIMAL: Default constructor called" << "\033[0m" << std::endl;
}

WrongAnimal::WrongAnimal(const std::string &type) :wrong_type(type){}

WrongAnimal::~WrongAnimal(){
    std::cout << "\033[33m" << "WRONGANIMAL: Destructor called" << "\033[0m" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &wrong_animal){
    std::cout << "\033[33m" << "WRONGANIMAL: Copy constructor called" << "\033[0m" << std::endl;
    *this = wrong_animal;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &wrong_animal) {
    if (this != &wrong_animal) {
        this->wrong_type = wrong_animal.wrong_type;
    }
    return *this;
}

void WrongAnimal::setType(std::string type){
    this->wrong_type = type;
}

std::string WrongAnimal::getType() const{
    return wrong_type;
}

const char *WrongAnimal::makeSound() const{
    return "shhh";
}
