#ifndef INTERN_HPP
#define INTERN_HPP

#include <iostream>
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{
private:
	/* data */
public:
	Intern(/* args */);
	~Intern();
	Form*	makeForm(std::string nameForm, std::string target);
};


#endif