#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
#include <iostream>
#include <stdexcept>

class Form;
#include "Form.hpp"

class Bureaucrat {
	private:
		Bureaucrat();
		const std::string name;
		int grade;
	public:
		Bureaucrat(const std::string &name, int grade);
		Bureaucrat(const Bureaucrat &bu);
		~Bureaucrat();
		Bureaucrat &operator=(const Bureaucrat &bu);

		const std::string getName() const;
		int getGrade() const;

		class GradeTooHighException : public std::exception {
			public:
				GradeTooHighException(std::string const &msg);
				virtual ~GradeTooHighException() throw();
				virtual const char* what() const throw();
			private:
				GradeTooHighException();
				std::string msg;
		};

		class GradeTooLowException : public std::exception {
			public:
				GradeTooLowException(std::string const &msg);
				virtual ~GradeTooLowException() throw();
				virtual const char* what() const throw();
			private:
				GradeTooLowException();
				std::string msg;
		};


		void increment_grade(int target); //ув
		void decrement_grade(int target); //ум

		void signForm(Form &form);
};

std::ostream &operator<<(std::ostream& ost, const Bureaucrat &bu);


#endif