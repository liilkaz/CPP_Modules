#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

class PresidentialPardonForm : public Form {
	private:
		std::string target;
	public:
		PresidentialPardonForm(std::string target);
		PresidentialPardonForm(const PresidentialPardonForm &presidential);
		~PresidentialPardonForm();
		PresidentialPardonForm &operator=(const PresidentialPardonForm &presidential);

		void execute(Bureaucrat const & executor) const;
};

#endif