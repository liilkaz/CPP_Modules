#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("ShrubberyName", 145, 137) {
	this->target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &shrub) : Form(shrub.name, 145, 137) {
	*this = shrub;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &shrub) {
	if (this != &shrub) {
		this->target = shrub.target;
		this->indicator = shrub.indicator;
	}
	return *this;
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const {
	if (indicator == false)
		throw NotSigned(executor.getName() + "can't execute unsigned form!");
	if (executor.getGrade() > grade_to_execute) {
		throw GradeTooLowException(executor.getName() + " can't execute " + name + " because his grade too low.");
	}
	std::ofstream createnewfile(target + "_shrubbery");
	if (createnewfile.is_open()) {
		createnewfile << "....................||||||||||....||||||" << std::endl;
		createnewfile << "..................||........||||....||....|||" << std::endl;
		createnewfile << "..................|||||||......|||||........||||||||||||||" << std::endl;
		createnewfile << "................||....|||..........|||.........|..|........|||||" << std::endl;
		createnewfile << "................||...........................|||||......|||||....|" << std::endl;
		createnewfile << "................||............................||||......||||......|" << std::endl;
		createnewfile << "............|....|.........................|||......................||" << std::endl;
		createnewfile << "..........||..|||.....................................................|||" << std::endl;
		createnewfile << "..|||||||||..................|......................................|....||" << std::endl;
		createnewfile << "||||......||............|||||............|..|||....................|||||||" << std::endl;
		createnewfile << "||..............................||..............||||......................||||" << std::endl;
		createnewfile << "|||................................................||........................||" << std::endl;
		createnewfile << "..|||..................................||............................|........||" << std::endl;
		createnewfile << "....||..........|................|||||..............................|||||......||" << std::endl;
		createnewfile << "....||....||||..................||||................................||||........||" << std::endl;
		createnewfile << "..||......|||||......................................................||..........||" << std::endl;
		createnewfile << "|||..........||..........|||..||||||..||||..|||......||.......................|||" << std::endl;
		createnewfile << "||............................|..|......||....|..|..||||||||..............||||" << std::endl;
		createnewfile << "|||..........||||||||......||......|..|||..||..|||||...................||||" << std::endl;
		createnewfile << "..|||||||||||||||||....||....|..|||||.........................|||||||||||" << std::endl;
		createnewfile << "...................||||..|||||...||||......||............||||||||" << std::endl;
		createnewfile << "..................................|||....|||..|||" << std::endl;
		createnewfile << "....................................||............||" << std::endl;
		createnewfile << "....................................||....||....|||||" << std::endl;
		createnewfile << "...................................|||||..||||..||||||" << std::endl;
		createnewfile << "..................................|||||||||..||||||||||" << std::endl;
		createnewfile << "................................||||||||||||....||||||||||" << std::endl;
		createnewfile << "...............................|||||||||||||||||.|||||||||||" << std::endl;
		createnewfile << "..............................|||||||||||||||||..||||||||||||" << std::endl;
		createnewfile << ".............................|||||||||||||||||..||||||||||||||" << std::endl;
		createnewfile << "...........................|||||||||||||||||..||||||||||||||||||" << std::endl;
	}
	else
		throw NotCreateFile("File could not be created!");
}
