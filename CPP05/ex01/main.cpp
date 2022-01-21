#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void) {
	try {
		std::cout << "**************************" << std::endl;
		Bureaucrat TOP ("Top", 100);
		Form blank12 ("blank12", 150, 150);
		TOP.signForm(blank12);
	} catch (Bureaucrat::GradeTooLowException &e) {
		std::cout << "\033[0;31m" << e.what() << "\033[0m" << std::endl;
	} catch (Bureaucrat::GradeTooHighException &e) {
		std::cout << "\033[0;31m" << e.what() << "\033[0m" << std::endl;
	} catch (Form::GradeTooLowException &e) {
		std::cout << "\033[0;31m" << e.what() << "\033[0m" << std::endl;
	}

	try {
		std::cout << "**************************" << std::endl;
		Bureaucrat HOP ("Hop", 125);
		Form blank15 ("blank15", 100, 100);
		HOP.signForm(blank15);
	} catch (Bureaucrat::GradeTooLowException &e) {
		std::cout << "\033[0;31m" << e.what() << "\033[0m" << std::endl;
	} catch (Bureaucrat::GradeTooHighException &e) {
		std::cout << "\033[0;31m" << e.what() << "\033[0m" << std::endl;
	} catch (Form::GradeTooLowException &e) {
		std::cout << "\033[0;31m" << e.what() << "\033[0m" << std::endl;
	}

	return (0);
}