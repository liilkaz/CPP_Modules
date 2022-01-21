#include "Karen.hpp"

Karen::Karen(){
	all[0] = &Karen::debug;
	all[1] = &Karen::info;
	all[2] = &Karen::warning;
	all[3] = &Karen::error;
}

void Karen::debug(void){
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
}

void Karen::info(void){
	std::cout << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!" << std::endl;
}

void Karen::warning(void){
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month." << std::endl;
}

void Karen::error(void){
	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}

void Karen::complain( std::string level ){
	int lvl;
	lvl = level == "DEBUG" ? 0 : level == "INFO" ? 1 : level == "WARNING" ? 2 : level == "ERROR" ? 3 : -1;
	switch(lvl) {
	case 0:
		(this->*all[0])();
		break;
	case 1:
		(this->*all[1])();
		break;
	case 2:
		(this->*all[2])();
		break;
	case 3:
		(this->*all[3])();
		break;
	default:
		std::cout << "DUSHNILA" << std::endl;
		break;
	}
}



Karen::~Karen(){}
