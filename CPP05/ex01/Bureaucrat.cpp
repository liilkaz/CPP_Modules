#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() {}

Bureaucrat::Bureaucrat(const std::string &name, int grade) :name(name) {
	if (grade > 150) {
		throw GradeTooLowException(name + "'s grade can't be more 150");
	}
	if (grade < 1) {
		throw GradeTooHighException(name + "'s grade can't be less 1");
	}
	this->grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &bu){
	*this = bu;
}

Bureaucrat::~Bureaucrat() {}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &bu){
	if (this != &bu)
		this->grade = bu.grade;
	return *this;
}

const std::string Bureaucrat::getName() const{
	return name;
}

int Bureaucrat::getGrade() const {
	return grade;
}

void Bureaucrat::increment_grade(int target) {
	try {
		if (target >= grade) {
			throw GradeTooHighException(name + "'s grade is too high. Grade can't be " + std::to_string(grade - target));
		}
		if (target < 1) {
			throw GradeTooHighException("target can't be less than 1");
		}

		grade -= target;
		std::cout << name << "'s grade increased by " << target << ". New grade is " << grade << std::endl;
	} catch(GradeTooHighException &e) {
		std::cout << "\033[0;31m" << e.what() << "\033[0m" << std::endl;
	}
}

void Bureaucrat::decrement_grade(int target) {
	try {
		if (grade + target > 150) {
			throw GradeTooLowException(name + "'s grade is too low. Grade can't be " + std::to_string(grade + target));
		}
		if (target < 1) {
			throw GradeTooLowException("target can't be less than 1");
		}
		grade += target;
		std::cout << name << "'s grade decreased by " << target << ". New grade is " << grade << std::endl;
	} catch (GradeTooLowException &e){
		std::cout << "\033[0;31m" << e.what() << "\033[0m" << std::endl;
	}
}

Bureaucrat::GradeTooHighException::GradeTooHighException(std::string const &str) : msg(str) {}

const char* Bureaucrat::GradeTooHighException::what() const throw() {
	return msg.c_str();
}

Bureaucrat::GradeTooHighException::~GradeTooHighException() throw() {}

Bureaucrat::GradeTooLowException::GradeTooLowException(std::string const &str) : msg(str) {}

const char* Bureaucrat::GradeTooLowException::what() const throw() {
	return msg.c_str();
}

Bureaucrat::GradeTooLowException::~GradeTooLowException() throw() {}

std::ostream &operator<<(std::ostream &out, const Bureaucrat &bu) {
	
	out << "\033[0;32m" << bu.getName() << "'s grade is " << std::to_string(bu.getGrade()) << "\033[0m" << std::endl;

	return out;
}

void Bureaucrat::signForm(Form &form) {
	form.beSigned(*this);
	std::cout << "\033[0;32m" << name << " signs " << form.getName() << "\033[0m" << std::endl;
}