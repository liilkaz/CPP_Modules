#include "Contact.hpp"
#include "Phonebook.hpp"

int	main(void) {
	std::string command;
	Phonebook phonebook;

	std::cout << "Available commands: ADD, SEARCH, EXIT" << std::endl;
	 while (command != "EXIT") {
		std::cout << "\033[0;33m" << "ENTER COMMAND: " << "\033[0m";
		std::getline(std::cin, command);
		if (std::cin.eof())
			exit(1);
		if (command == "ADD")
			phonebook.addContact();
		else if (command == "SEARCH")
			phonebook.searchContact();
		else
			if (command != "EXIT") {
				std::cout << "\033[0;31m" << "Wrong command!" << "\033[0m" << std::endl;;
				std::cout << "\033[0;32m" << "Available commands: ADD, SEARCH, EXIT" << "\033[0m" << std::endl;
			}
			else
				std::cout << "You got out of the phonebook" << std::endl;

	}
	return 0;
}