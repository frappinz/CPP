/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 17:15:55 by fminardi          #+#    #+#             */
/*   Updated: 2021/09/12 22:14:23 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <exception>
#include "Form.hpp"

class Form;
class Bureaucrat
{
	private:
		const std::string Name;
		int Grade;
	public:
		Bureaucrat();
		Bureaucrat(int grade, std::string name);
		Bureaucrat(const Bureaucrat &bur);
		Bureaucrat& operator= (const Bureaucrat &bur);
		~Bureaucrat();
		std::string getName() const;
		void setName(std::string name) const;
		class	GradeTooHighException : public std::exception
		{
			public:
				const char * what () const throw ();
		};
		class	GradeTooLowException : public std::exception
		{
			public:
				const char * what () const throw ();
		};
		int getGrade() const;
		void decrementGrade();
		void incrementGrade();
		void executeForm(const Form& f);
		void signForm(Form &f);
};
	std::ostream& operator<<(std::ostream& out, Bureaucrat& bur);

#endif