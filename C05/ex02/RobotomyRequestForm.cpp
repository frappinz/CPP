/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fminardi <fminardi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 13:22:43 by fminardi          #+#    #+#             */
/*   Updated: 2021/09/14 13:22:44 by fminardi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
RobotomyRequestForm::RobotomyRequestForm(){}

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

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &sh)
{
	*this = sh;
}

RobotomyRequestForm& RobotomyRequestForm::operator = (const RobotomyRequestForm &sh)
{
	Target = sh.Target;
	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm(){}
