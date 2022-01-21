#ifndef INTERN_HPP
# define INTERN_HPP

#include <iostream>
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern {
	public:
		Intern();
		Intern(const Intern &intern);
		~Intern();
		Intern &operator=(const Intern &intern);

		Form *makeForm(std::string nameform, std::string target);

		class UnknownForm : public std::exception {
			public:
				UnknownForm(std::string const &msg);
				virtual ~UnknownForm() throw();
				virtual const char* what() const throw();
			private:
				UnknownForm();
				std::string msg;
		};

};

#endif