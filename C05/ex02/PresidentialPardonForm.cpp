/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fminardi <fminardi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 13:22:38 by fminardi          #+#    #+#             */
/*   Updated: 2021/09/14 13:22:38 by fminardi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(){}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("PresidentialPardonForm", 25, 5)
{
	this->Target = target;
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if (!this->getSign())
		throw(Form::FormNotSignedException());
	if (executor.getGrade() <= this->getGrade_to_execute())
		std::cout << this->Target << " has been pardoned by Zafod Beeblebrox" << std::endl;
	else
	{
		throw(Bureaucrat::GradeTooLowException());
	}
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &sh)
{
	*this = sh;
}

PresidentialPardonForm& PresidentialPardonForm::operator = (const PresidentialPardonForm &sh)
{
	Target = sh.Target;
	return *this;
}

PresidentialPardonForm::~PresidentialPardonForm(){}
