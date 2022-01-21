#include "Brain.hpp"

Brain::Brain() {
    std::cout << "\033[31m" << "BRAIN: Default constructor called" << "\033[0m" << std::endl;
}

Brain::~Brain() {
    std::cout << "\033[31m" << "BRAIN: Destructor called" << "\033[0m" << std::endl;
}

Brain::Brain(const Brain &brain) {
    std::cout << "\033[31m" << "BRAIN: Copy constructor called" << "\033[0m" << std::endl;
    for (int i = 0; i < 100; i++) {
        this->ideas[i] = brain.ideas[i];
    }
}

Brain &Brain::operator=(const Brain &brain) {
    if (this != &brain) {
        for (int i = 0; i < 100; i++) {
		// std::cout << i << " " << this->ideas[i] << " " << brain.ideas[i] <<  " HERE-operator\n";
            this->ideas[i] = brain.ideas[i];
        }
    }
    return *this;
}
