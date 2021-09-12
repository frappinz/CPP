#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("PresidentialPardonForm", 25, 5)
{
	this->Target = target;
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if (this->getSign() && executor.getGrade() <= this->getGrade_to_execute())
		std::cout << this->Target << " has been pardoned by Zafod Beeblebrox" << std::endl;
	else
	{
		throw(Bureaucrat::GradeTooLowException());
	}
}

PresidentialPardonForm::~PresidentialPardonForm(){}
