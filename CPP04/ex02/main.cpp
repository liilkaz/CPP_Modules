#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
    // const Animal* meta = new Animal();
    // const Animal* j = new Dog();
    // const Animal* i = new Cat();
    // std::cout << j->getType() << " (dog) " << std::endl;
    // std::cout << i->getType() << " (cat)" << std::endl;
    // std::cout << i->makeSound() << " (cat says)" << std::endl; //will output the cat sound!
    // std::cout << j->makeSound() << " (dog says)" << std::endl;
    // std::cout << meta->makeSound() << " (animals)" << std::endl;

    // delete meta;
    // delete j;
    // delete i;

    // const WrongAnimal* feta = new WrongAnimal();
    // const WrongAnimal* l = new WrongCat();
    // std::cout << l->getType() << " (wrongcat)" << std::endl;
    // std::cout << l->makeSound() << " (wrongcat says)" << std::endl;
    // std::cout << feta->makeSound() << " (wronganimals)" << std::endl;

    // delete feta;
    // delete l;

	int n = 10;
	Animal *animal[n];
	for(int i = 0; i < n; i ++)
	{
		if ((i % 2) == 0)
			animal[i] = new Dog();
		else 
			animal[i] = new Cat();
	}
	for(int i = 0; i < n; i ++)
	{
			delete animal[i];
	}

	// Animal anum;

	// Dog basic;
	// {
	// 	Dog tmp;
	// 	tmp  = basic;
	// 	std::cout << basic.getDogsBrain() << std::endl;
	// 	std::cout << tmp.getDogsBrain() << std::endl;
	// }
	


	// Dog Doge;
	// Dog copy_Doge(Doge);
	// Cat Kitty;
	// Cat copy_Kitty(Kitty);
	// std::cout << "<Doge's address>" << std::endl;
	// std::cout << Doge.getDogsBrain() << std::endl;
	// std::cout << "<Copy Doge's address>" << std::endl;
	// std::cout << copy_Doge.getDogsBrain() << std::endl << std::endl;
	// std::cout << "<Kitty's address>" << std::endl;
	// std::cout << Kitty.getCatsBrain() << std::endl;
	// std::cout << "<Copy Kitty's address" << std::endl;
	// std::cout << copy_Kitty.getCatsBrain() << std::endl<<std::endl;
}