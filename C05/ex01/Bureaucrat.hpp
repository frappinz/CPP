/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fminardi <fminardi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 17:15:55 by fminardi          #+#    #+#             */
/*   Updated: 2021/09/14 13:15:55 by fminardi         ###   ########.fr       */
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
		int getGrade();
		void decrementGrade();
		void incrementGrade();
		void signForm(Form &f);
};
	std::ostream& operator<<(std::ostream& out, Bureaucrat& bur);

#endif