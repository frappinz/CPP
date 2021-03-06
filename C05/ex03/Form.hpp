/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fminardi <fminardi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 17:16:00 by fminardi          #+#    #+#             */
/*   Updated: 2021/09/14 13:41:30 by fminardi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"
#include <fstream>
#include <sstream>
class Bureaucrat;
class Form
{
private:
	const std::string Name;
	bool sign;
	const int grade_to_sign;
	const int grade_to_execute;
	
public:
	Form(std::string name, int gs, int ge);
	Form();
	Form(const Form &form);
	Form& operator = (const Form &form);
	virtual ~Form();
	class	GradeTooHighException : public std::exception
	{
		public:
			virtual const char * what () const throw ();
	};
	class	GradeTooLowException : public std::exception
	{
		public:
			const char * what () const throw ();
	};
	class FormNotSignedException : public std::exception
	{
		virtual const char* what() const throw();
	};
	std::string getName() const;
	bool getSign() const;
	int getGrade_to_sign() const;
	int getGrade_to_execute() const;
	void beSigned(Bureaucrat &k);
	virtual void execute(Bureaucrat const & executor) const = 0;
};

std::ostream& operator<<(std::ostream& out, Form& form);

#endif