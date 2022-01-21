#ifndef FORM_HPP
# define FORM_HPP

class Bureaucrat;
#include "Bureaucrat.hpp"

class Form {
	protected:
		Form();
		const std::string name;
		const int grade_to_sign; //подписание
		const int grade_to_execute; //выполнение
		bool indicator;
	public:
		Form(const std::string name, const int grade_to_sign, const int grade_to_execute);
		Form(const Form &form);
		~Form();
		Form &operator=(const Form &form);

		const std::string getName() const;
		int getGradeSign() const;
		int getGradeExecute() const;
		bool getIndicator() const;

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

		class NotSigned: public std::exception {
			public:
				NotSigned(std::string const &msg);
				virtual ~NotSigned() throw();
				virtual const char* what() const throw();
			private:
				NotSigned();
				std::string msg;
		};

		class NotCreateFile: public std:: exception {
			public:
				NotCreateFile(std::string const &msg);
				virtual ~NotCreateFile() throw();
				virtual const char* what() const throw();
			private:
				NotCreateFile();
				std::string msg;
		};

		class FailedRand: public std:: exception {
			public:
				FailedRand(std::string const &msg);
				virtual ~FailedRand() throw();
				virtual const char* what() const throw();
			private:
				FailedRand();
				std::string msg;
		};

		void beSigned(Bureaucrat &bureaucrat);
		virtual void execute(Bureaucrat const & executor) const = 0;
};

std::ostream &operator<<(std::ostream& ost, const Form &form);

#endif