#include "Intern.hpp"

Intern::Intern() {}

Intern::Intern(const Intern &intern) { *this = intern; }

Intern::~Intern() {}

Intern &Intern::operator=(const Intern &intern) {
	(void)intern;
	return *this;
}

Intern::UnknownForm::UnknownForm(std::string const &str) : msg(str) {}
Intern::UnknownForm::~UnknownForm() throw() {}
const char* Intern::UnknownForm::what() const throw() {
	return msg.c_str();
}

Form *Intern::makeForm(std::string nameform, std::string target) {
	int clss;
	Form *form;

	clss = nameform == "presidential pardon" ? 0 : nameform == "robotomy request" ? 1 : nameform == "shrubbery creation" ? 2 : -1;
	switch (clss)
	{
	case 0:
		form = new PresidentialPardonForm(target);
		std::cout << "\033[0;33mIntern creates form: Presidential Pardon\033[0m" <<std::endl;
		return form;
	case 1:
		form = new RobotomyRequestForm(target);
		std::cout << "\033[0;33mIntern creates form: Robotomy Request\033[0m" <<std::endl;
		return form;
	case 2:
		form = new ShrubberyCreationForm(target);
		std::cout << "\033[0;33mIntern creates form: Shrubbery Creation\033[0m" <<std::endl;
		return form;
	default:
		throw UnknownForm("Form is not known");
	}
}
