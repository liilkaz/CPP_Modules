#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("RobotomyName", 72, 45) {
	this->target = target;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &robotomy) : Form(robotomy.name, 72, 45) {
	*this = robotomy;
}

RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &robotomy) {
	if (this != &robotomy) {
		this->target = robotomy.target;
		this->indicator = robotomy.indicator;
	}
	return *this;
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const {
	int random50;
	if (indicator == false)
		throw NotSigned(executor.getName() + "can't execute unsigned form!");
	if (executor.getGrade() > grade_to_execute) {
		throw GradeTooLowException(executor.getName() + " can't execute " + name + " because his grade too low.");
	}
	
	std::cout << "\033[0;33mbzzzzzh....bzzzzzzzzzzh...bzzh...bzzzzzzzzzzzzzh\033[0m" << std::endl;
	srand(time(NULL));
	random50 = rand() % 2;
	if (random50 == 0) {
		std::cout << target << " has been robotomized \033[0;32msuccessfully" << std::endl;
	}
	else
		std::cout << target << ": \033[0;31mFailed" << std::endl;
}