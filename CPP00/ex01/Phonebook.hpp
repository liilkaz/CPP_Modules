#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
#include <iostream>
#include <string>
#include <iomanip>
#include "Contact.hpp"

class Phonebook {
	private:
		int index;
		bool max;
		Contact contacts[8];
	
	public:
		Phonebook();
		~Phonebook();
		void addContact();
		void searchContact();
		void informationAboutContact(int index);
};

#endif