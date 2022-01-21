#include "Phonebook.hpp"

Phonebook::Phonebook() {
	index = 0;
	max = false;
}

Phonebook::~Phonebook() {}

void Phonebook::addContact() {
	std::string str;

	contacts[index].setIndex(index + 1);

	std::cout << "Enter the " << "\033[0;32m" << "FIRST NAME: " << "\033[0m";
	std::getline(std::cin, str);
	contacts[index].setFirstName(str);

	std::cout << "Enter the " << "\033[0;32m" << "LAST NAME: " << "\033[0m";
	std::getline(std::cin, str);
	contacts[index].setLastName(str);

	std::cout << "Enter the " << "\033[0;32m" << "NICKNAME: " << "\033[0m";
	std::getline(std::cin, str);
	contacts[index].setNickName(str);

	std::cout << "Enter the " << "\033[0;32m" << "PHONE NUMBER: " << "\033[0m";
	std::getline(std::cin, str);
	contacts[index].setPhoneNumber(str);

	std::cout << "Enter the " << "\033[0;32m" << "DARKEST SECRET: " << "\033[0m";
	std::getline(std::cin, str);
	contacts[index].setDarkestSecret(str);

	std::string empty = contacts[index].getFirstName() + contacts[index].getLastName() + contacts[index].getNickName() + contacts[index].getPhoneNumber() + contacts[index].getDarkestSecret();
	if (empty.empty()) {
		std::cout << "\033[0;31m" << "Empty contact!" << "\033[0m" << std::endl;
		index--;}
	else
		std::cout << "\033[0;32m" << "New contact added successfully!" << "\033[0m" << std::endl;

	if(index < 7)
		index++;
	else {
		max = true;
		index = 0;
	}
	
}

void Phonebook::searchContact(){
	std::string number;
	int	num;

	std::cout << "|-------------------------------------------|" << std::endl;
	std::cout << "|" << std::setw(10) << "index";
	std::cout << "|" << std::setw(10) << "first name";
	std::cout << "|" << std::setw(10) << "last name";
	std::cout << "|" << std::setw(10) << "nickname" << "|";
	std::cout << std::endl << "|-------------------------------------------|" << std::endl;
	int max;
	max = this->max ? 8 : index;
	for (int i = 0; i < max; i++) {
		std::cout << "|" << std::setw(10) << contacts[i].getIndex();
		if (contacts[i].getFirstName().size() > 10)
			std::cout << "|" << std::setw(9) << contacts[i].getFirstName().substr(0, 9) << ".";
		else
			std::cout << "|" << std::setw(10) << contacts[i].getFirstName();
		if (contacts[i].getLastName().size() > 10)
			std::cout << "|" << std::setw(9) << contacts[i].getLastName().substr(0,9).substr(0, 9) << ".";
		else
			std::cout << "|" << std::setw(10) << contacts[i].getLastName();
		if (contacts[i].getNickName().size() > 10)
			std::cout << "|" << std::setw(9) << contacts[i].getNickName().substr(0, 9) << ".";
		else
			std::cout << "|" << std::setw(10) << contacts[i].getNickName();
		std::cout << "|" << std::endl;
		}
	std::cout << "|-------------------------------------------|" << std::endl;
	std::cout << "Enter the " << "\033[0;32m" << "index"  << "\033[0m" << " of the desired contact: " << std::endl;
	std::getline(std::cin, number);
	num = atoi(number.c_str());
	if (num < 1 || num > max)
		std::cout << "\033[0;31m" << "Index not found! There are only " << max << " entries in the book"  << "\033[0m" << std::endl;
	else
		this->informationAboutContact(num - 1);
}

void Phonebook::informationAboutContact(int index){
	std::cout << "\033[0;33m" << "All information about contact number " << index + 1 << "\033[0m" << std::endl; 
	std::cout << "First name:     " << contacts[index].getFirstName() << std::endl;
	std::cout << "Last name:      " << contacts[index].getLastName() << std::endl;
	std::cout << "Nickname:       " << contacts[index].getNickName() << std::endl;
	std::cout << "Phone number:   " << contacts[index].getPhoneNumber() << std::endl;
	std::cout << "Darkest secret: " << contacts[index].getPhoneNumber() << std::endl;
}

