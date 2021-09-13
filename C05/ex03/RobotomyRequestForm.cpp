#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("RobotomyRequestForm", 72, 45)
{
	this->Target = target;
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	if (!this->getSign())
		throw(Form::FormNotSignedException());
	if(executor.getGrade() <= this->getGrade_to_execute())
		std::cout << "bzbzbzbzbzbzb < " << executor.getName() << " > has been robotomized successfully\n";
	else
		throw(Bureaucrat::GradeTooLowException());
}

RobotomyRequestForm::~RobotomyRequestForm(){}
