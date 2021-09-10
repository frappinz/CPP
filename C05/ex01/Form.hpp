/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fminardi <fminardi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 17:16:00 by fminardi          #+#    #+#             */
/*   Updated: 2021/09/09 17:16:01 by fminardi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

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
	~Form();
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
	std::string getName() ;
	bool getSign();
	int getGrade_to_sign() const;
	int getGrade_to_execute() const;
	void beSigned(Bureaucrat &k);
};

std::ostream& operator<<(std::ostream& out, Form& form);

#endif