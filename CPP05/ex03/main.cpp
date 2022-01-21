#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{
	// 	Bureaucrat top("Top", 1);
	// 	Bureaucrat bot("Bot", 150);
	// 	RobotomyRequestForm form2("Robot");
	// 	PresidentialPardonForm form3("President");
	// 	ShrubberyCreationForm form("Home");
	// 	std::cout << "****************START****************" << std::endl;

	// try {
	// 	std::cout << "****************HOME*****************" << std::endl;
	// 	std::cout << form << std::endl;
	// 	top.signForm(form);
	// 	std::cout << form << std::endl;
	// 	top.executeForm(form);
	// } catch(const std::exception& e) {
	// 	std::cerr << "\033[0;31m" << e.what() << "\033[0m" << std::endl;
	// }
	// try {
	// 	std::cout << "****************ROBOT****************" << std::endl;
	// 	std::cout << form2 << std::endl;
	// 	top.signForm(form2);
	// 	std::cout << form2 << std::endl;
	// 	top.executeForm(form2);
	// } catch(const std::exception& e) {
	// 	std::cerr << "\033[0;31m" << e.what() << "\033[0m" << std::endl;
	// }
	// try {
	// 	std::cout << "**************PRESIDENT**************" << std::endl;
	// 	std::cout << form3 << std::endl;
	// 	top.signForm(form3);
	// 	std::cout << form3 << std::endl;
	// 	top.executeForm(form3);
	// } catch(const std::exception& e) {
	// 	std::cerr << "\033[0;31m" << e.what() << "\033[0m" << std::endl;
	// }
	// try {
	// 	std::cout << "*************FOR ERRORS*************" << std::endl;
	// 	bot.executeForm(form);
	// } catch(const std::exception& e) {
	// 	std::cerr << "\033[0;31m" << e.what() << "\033[0m" << std::endl;
	// }
	// try {
	// 	bot.executeForm(form2);
	// } catch(const std::exception& e) {
	// 	std::cerr << "\033[0;31m" << e.what() << "\033[0m" << std::endl;
	// }
	// try {
	// 	bot.executeForm(form3);
	// 	std::cout << "*****************END*****************" << std::endl;
	// } catch(const std::exception& e) {
	// 	std::cerr << "\033[0;31m" << e.what() << "\033[0m" << std::endl;
	// }



	Intern someRandomIntern;
	Form* rrf;
	Form* prf;
	Form* scf;
	Form* unknow;
	std::cout << "***********robotomy request***********\n" << std::endl;
	try {
		rrf = someRandomIntern.makeForm("robotomy request", "Bender");
		std::cout << *rrf <<std::endl;
		delete rrf;
	} catch(const std::exception& e) {
		std::cerr << "\033[0;31m" << e.what() << "\033[0m" << std::endl;
	}
	std::cout << "**********presidential pardon*********\n" << std::endl;
	try {
		prf = someRandomIntern.makeForm("presidential pardon", "Pardon");
		std::cout << *prf <<std::endl;
		delete prf;
	} catch(const std::exception& e) {
		std::cerr << "\033[0;31m" << e.what() << "\033[0m" << std::endl;
	}
	std::cout << "**********shrubbery creation*********\n" << std::endl;
	try {
		scf = someRandomIntern.makeForm("shrubbery creation", "Home");
		std::cout << *scf <<std::endl;
		delete scf;
	} catch(const std::exception& e) {
		std::cerr << "\033[0;31m" << e.what() << "\033[0m" << std::endl;
	}
	std::cout << "**************unknow form*************\n" << std::endl;
	try {
		unknow = someRandomIntern.makeForm("make coffee", "Boom");
		std::cout << *unknow <<std::endl;
		delete unknow;
	} catch(const std::exception& e) {
		std::cerr << "\033[0;31m" << e.what() << "\033[0m" << std::endl;
	}
}