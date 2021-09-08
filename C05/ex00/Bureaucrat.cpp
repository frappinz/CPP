#include "Bureaucrat.hpp"

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


std::string Bureaucrat::getName() const
{
	return (this->Name);
}

int Bureaucrat::getGrade() {return this->Grade;}

void Bureaucrat::decrementGrade()
{
	if (this->Grade + 1 == 151)
	{
		std::cout << "You reached the lowest level: ";
		throw (GradeTooLowException());
	}
	this->Grade++;
}

void Bureaucrat::incrementGrade()
{
	if (this->Grade - 1 == 0)
	{
		std::cout << "You reached the highest level: ";
		throw (GradeTooHighException());
	}
	this->Grade--;
}

std::ostream& operator<<(std::ostream& out, Bureaucrat& bur)
{
	return out << "< " << bur.getName() << " >, bureaucrat grade < " << bur.getGrade() << " >\n";
	//return out;
}