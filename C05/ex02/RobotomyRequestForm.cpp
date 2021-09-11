#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("RobotomyRequestForm", 72, 45)
{
	this->Target = target;
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{

}

RobotomyRequestForm::~RobotomyRequestForm(){}
