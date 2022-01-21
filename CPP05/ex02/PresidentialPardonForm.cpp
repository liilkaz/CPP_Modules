#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("PresidentialName", 25, 5) {
	this->target = target;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &presidential) : Form(presidential.name, 25, 5) {
	*this = presidential;
}

PresidentialPardonForm::~PresidentialPardonForm() {}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &presidential) {
	if (this != &presidential) {
		this->target = presidential.target;
		this->indicator = presidential.indicator;
	}
	return *this;
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const {
	if (indicator == false)
		throw NotSigned(executor.getName() + "can't execute unsigned form!");
	if (executor.getGrade() > grade_to_execute) {
		throw GradeTooLowException(executor.getName() + " can't execute " + name + " because his grade too low.");
	}
	std::cout << target << " \033[0;33has been pardoned by Zafod Beeblebrox.\033[0m" << std::endl;
}