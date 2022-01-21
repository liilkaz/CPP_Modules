#include "Karen.hpp"

Karen::Karen(){
	all[0] = &Karen::debug;
	all[1] = &Karen::info;
	all[2] = &Karen::warning;
	all[3] = &Karen::error;
}

void Karen::debug(void){
	std::cout << "[DEBUG]" << std::endl;
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
	std::cout << std::endl;
}

void Karen::info(void){
	std::cout << "[INFO]" << std::endl;
	std::cout << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!" << std::endl;
	std::cout << std::endl;
}

void Karen::warning(void){
	std::cout << "[WARNING]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month." << std::endl;
	std::cout << std::endl;
}

void Karen::error(void){
	std::cout << "[ERROR]" << std::endl;
	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
	std::cout << std::endl;
}

void Karen::complain( std::string level ){
	int lvl;
	lvl = level == "DEBUG" ? 0 : level == "INFO" ? 1 : level == "WARNING" ? 2 : level == "ERROR" ? 3 : -1;
	switch(lvl) {
	case 0:
		(this->*all[0])();
	case 1:
		(this->*all[1])();
	case 2:
		(this->*all[2])();
	case 3:
		(this->*all[3])();
		break;
	default:
		std::cout << "[Probably complaining about insignificant problems]\n" << std::endl;
		break;
	}
}



Karen::~Karen(){}
