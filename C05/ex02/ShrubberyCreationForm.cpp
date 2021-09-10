#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("ShrubberyCreationForm", 145, 137)
{
	this->Target = target;
	std::cout << "sssssss\n";
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	(void) executor;
}

ShrubberyCreationForm::~ShrubberyCreationForm(){}
