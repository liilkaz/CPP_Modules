#include "Form.hpp"

Form::Form() : grade_to_sign(150), grade_to_execute(150) {

}

Form::Form(const std::string name, const int grade_to_sign, const int grade_to_execute) : name(name), grade_to_sign(grade_to_sign), grade_to_execute(grade_to_execute) {
	this->indicator = false;
	if (grade_to_sign > 150 || grade_to_execute > 150) {
		throw GradeTooLowException(name + "'s grade can't be more 150");
	}
	if (grade_to_sign < 1 || grade_to_execute < 1) {
		throw GradeTooHighException(name + "'s grade can't be less 1");
	}
}

Form::Form(const Form &form) : name(form.getName()), grade_to_sign(form.getGradeSign()), grade_to_execute(form.getGradeExecute()) {
	*this = form;
}

Form::~Form() {}

Form &Form::operator=(const Form &form) {
	if (this != &form) {
		this->indicator = form.getIndicator();
	}
	return *this;
}

const std::string Form::getName() const{
	return name;
}

int Form::getGradeSign() const{
	return grade_to_sign;
}

int Form::getGradeExecute() const{
	return grade_to_execute;
}

bool Form::getIndicator() const{
	return indicator;
}

Form::GradeTooHighException::GradeTooHighException(std::string const &str) :msg(str) {}
Form::GradeTooHighException::~GradeTooHighException() throw() {}
const char* Form::GradeTooHighException::what() const throw() {
	return msg.c_str();
}

Form::GradeTooLowException::GradeTooLowException(std::string const &str) :msg(str) {}
Form::GradeTooLowException::~GradeTooLowException() throw() {}
const char* Form::GradeTooLowException::what() const throw() {
	return msg.c_str();
}

Form::NotSigned::NotSigned(std::string const &str) : msg(str) {}
Form::NotSigned::~NotSigned() throw() {}
const char* Form::NotSigned::what() const throw() {
	return msg.c_str();
}

Form::NotCreateFile::NotCreateFile(std::string const &str) : msg(str) {}
Form::NotCreateFile::~NotCreateFile() throw() {}
const char* Form::NotCreateFile::what() const throw() {
	return msg.c_str();
}

Form::FailedRand::FailedRand(std::string const &str) : msg(str) {}
Form::FailedRand::~FailedRand() throw() {}
const char* Form::FailedRand::what() const throw() {
	return msg.c_str();
}

/////////////

void Form::beSigned(Bureaucrat &bureaucrat) {
	if (indicator == false) {
		if(bureaucrat.getGrade() > grade_to_sign)
			throw GradeTooLowException(bureaucrat.getName() + " can't sign " + name + " because his grade too low.");
		indicator = true;
	}
}

std::ostream &operator<<(std::ostream& out, const Form &form) {
	out << "\033[0;32m" << form.getName() << " | grade for sign: " << std::to_string(form.getGradeSign());
	out << " | grade for execute: " << std::to_string(form.getGradeExecute());
	out << " | signing status: " << std::to_string(form.getIndicator()) << "\033[0m" << std::endl;
	return out;
}