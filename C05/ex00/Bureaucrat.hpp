#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <exception>

class Bureaucrat
{
	private:
		const std::string Name;
		int Grade;
	public:
		Bureaucrat(int grade, std::string name);
		~Bureaucrat();
		std::string getName() const;
		void setName(std::string name) const;
		class	GradeTooHighException : public std::exception
		{
			public:
				const char * what () const throw ();
				void fanculo();
		};
		class	GradeTooLowException : public std::exception
		{
			public:
				const char * what () const throw ();
		};
		int getGrade();
		void decrementGrade();
		void incrementGrade();
};
	std::ostream& operator<<(std::ostream& out, Bureaucrat& bur);

#endif