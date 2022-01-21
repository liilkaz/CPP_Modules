#include "Bureaucrat.hpp"

int main(void) {
	try {
		std::cout << "**************************" << std::endl;
		Bureaucrat LOL("Lol", 5);
		Bureaucrat NON("Non", 110);
		LOL.increment_grade(2);
		std::cout << LOL;
		NON.decrement_grade(25);
		std::cout << NON;
	} catch (Bureaucrat::GradeTooLowException &e) {
		std::cout << "\033[0;31m" << e.what() << "\033[0m" << std::endl;
	} catch (Bureaucrat::GradeTooHighException &e) {
		std::cout << "\033[0;31m" << e.what() << "\033[0m" << std::endl;
	}
	try {
		std::cout << "**************************" << std::endl;
		Bureaucrat BOB("Bob", -15);
		Bureaucrat POP("Pop", 170);
		BOB.increment_grade(30);
		std::cout << BOB;
		POP.decrement_grade(200);
		std::cout << POP;
	} catch (Bureaucrat::GradeTooLowException &e) {
		std::cout << "\033[0;31m" << e.what() << "\033[0m" << std::endl;
	} catch (Bureaucrat::GradeTooHighException &e) {
		std::cout << "\033[0;31m" << e.what() << "\033[0m" << std::endl;
	}
	try {
		std::cout << "**************************" << std::endl;
		Bureaucrat BIBA("Biba", 80);
		Bureaucrat BOBA("Boba", 120);
		BIBA.increment_grade(30);
		std::cout << BIBA;
		BOBA.decrement_grade(200);
		std::cout << BOBA;
	} catch (Bureaucrat::GradeTooLowException &e) {
		std::cout << "\033[0;31m" << e.what() << "\033[0m" << std::endl;
	} catch (Bureaucrat::GradeTooHighException &e) {
		std::cout << "\033[0;31m" << e.what() << "\033[0m" << std::endl;
	}
	// Bureaucrat BOB("Bob", -15);
	// Bureaucrat POP("Pop", 170);
	// BOB.increment_grade(30);
	// POP.decrement_grade(200);

	return (0);
}