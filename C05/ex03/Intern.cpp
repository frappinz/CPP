#include "Intern.hpp"

Intern::Intern(/* args */)
{
}

Form*	Intern::makeForm(std::string nameForm, std::string target)
{
	int i = 0;
	Form *a = NULL;
	std::string flist[3];
	flist[0] = "shrubbery";
	flist[1] = "robotomy";
	flist[2] = "presidential";

	for (i = 0; i < 4; i++)
	{
		if (nameForm == flist[i])
			break;
	}
	switch (i)
	{
	case 0:
		a = new ShrubberyCreationForm(target);
		break;
	case 1: 
		a = new RobotomyRequestForm(target);
		break;
	case 2:
		a = new PresidentialPardonForm(target);
		break;
	default:
		return NULL;
		break;
	}
	std::cout << "\033[0;33mIntern creates " << a->getName() <<"\033[0;37m" << std::endl;
	return a;
}

Intern::~Intern()
{
}
