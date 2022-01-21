#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << j->getType() << " (dog) " << std::endl;
    std::cout << i->getType() << " (cat)" << std::endl;
    std::cout << i->makeSound() << " (cat says)" << std::endl; //will output the cat sound!
    std::cout << j->makeSound() << " (dog says)" << std::endl;
    std::cout << meta->makeSound() << " (animals)" << std::endl;

    delete meta;
    delete j;
    delete i;

    const WrongAnimal* feta = new WrongAnimal();
    const WrongAnimal* l = new WrongCat();
    std::cout << l->getType() << " (wrongcat)" << std::endl;
    std::cout << l->makeSound() << " (wrongcat says)" << std::endl;
    std::cout << feta->makeSound() << " (wronganimals)" << std::endl;

    delete feta;
    delete l;
}