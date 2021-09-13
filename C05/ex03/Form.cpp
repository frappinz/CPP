/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fminardi <fminardi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 17:15:58 by fminardi          #+#    #+#             */
/*   Updated: 2021/09/13 15:22:10 by fminardi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(std::string name, int gs, int ge) : Name(name), grade_to_sign(gs), grade_to_execute(ge)
{
	if (gs < 1 || ge < 1)
		throw (GradeTooHighException());
	else if (gs > 150 || ge > 150)
		throw (GradeTooLowException());
	this->sign = false;
}

Form::~Form()
{
}

const char *Form::GradeTooLowException::what() const throw()
{
	return ("\033[0;31mYou can't create this form: grade too low\033[0;37m");
}
 
const char * Form::GradeTooHighException::what () const throw ()
{
	return ("\033[0;31mYou can't create this form: grade too high\033[0;37m");
}

const char* Form::FormNotSignedException::what() const throw() 
{
	return "\033[0;31mForm has not been signed\033[0;37m";
}

std::ostream& operator<<(std::ostream& out, Form& form)
{
	if (form.getSign())
		out << "\033[0;36mForm Name: < " << form.getName() << " >\nGrade to sign < " << form.getGrade_to_sign() << " >\nGrade to execute < " << form.getGrade_to_execute() << " >\nSigned: Yes\033[0;37m\n";
	else
		out << "\033[0;36mForm Name: < " << form.getName() << " >\nGrade to sign < " << form.getGrade_to_sign() << " >\nGrade to execute < " << form.getGrade_to_execute() << " >\nSigned: No\033[0;37m\n";
	return out;
}

Form::Form(const Form &form) : Name(form.Name), grade_to_sign(form.grade_to_sign), grade_to_execute(form.grade_to_execute)
{
	*this = form;
}

Form& Form::operator = (const Form &form)
{
	this->sign = form.sign;
	return *this;
}

std::string Form::getName() const {return this->Name;}
bool Form::getSign() const {return this->sign;}
int Form::getGrade_to_sign() const {return this->grade_to_sign;}
int Form::getGrade_to_execute() const {return this->grade_to_execute;}

void Form::beSigned(Bureaucrat &k)
{
	if (k.getGrade() > this->grade_to_sign)
		throw (Bureaucrat::GradeTooLowException());
	sign = true;
	std::cout << k.getName() << " signed " << getName() << std::endl;
}
