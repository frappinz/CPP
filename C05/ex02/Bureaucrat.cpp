/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fminardi <fminardi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 17:15:52 by fminardi          #+#    #+#             */
/*   Updated: 2021/09/09 17:15:53 by fminardi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
Bureaucrat::Bureaucrat(){}

Bureaucrat::Bureaucrat(int grade, std::string name) : Name(name)
{
	if (grade < 1)
		throw (GradeTooHighException());
	if (grade > 150)
		throw (GradeTooLowException());
	this->Grade = grade;
}

Bureaucrat::~Bureaucrat()
{
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Level too low!\n");
}
 
const char * Bureaucrat::GradeTooHighException::what () const throw ()
{
	return ("Level too high!\n");
}

std::string Bureaucrat::getName() const {return this->Name;}

int Bureaucrat::getGrade() {return this->Grade;}

void Bureaucrat::decrementGrade()
{
	if (this->Grade + 1 == 151)
	{
		std::cout << "You reached the lowest level: ";
		throw (GradeTooLowException());
	}
	this->Grade++;
	std::cout << "New grade of bureaucrat < " << getName() << " > is < " << getGrade() << " >\n";

}

void Bureaucrat::incrementGrade()
{
	if (this->Grade - 1 == 0)
	{
		std::cout << "You reached the highest level: ";
		throw (GradeTooHighException());
	}
	this->Grade--;
	std::cout << "New grade of bureaucrat < " << getName() << " > is < " << getGrade() << " >\n";
}

Bureaucrat::Bureaucrat(const Bureaucrat &bur)
{
	*this = bur;
}

Bureaucrat& Bureaucrat::operator= (const Bureaucrat &bur)
{
	this->Grade = bur.Grade;
	return *this;
}

std::ostream& operator<<(std::ostream& out, Bureaucrat& bur)
{
	return out << "< " << bur.getName() << " > bureaucrat grade < " << bur.getGrade() << " >\n";
	//return out;
}

void Bureaucrat::signForm(Form &f)
{
	f.beSigned(*this);
}
