/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fminardi <fminardi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 17:16:03 by fminardi          #+#    #+#             */
/*   Updated: 2021/09/14 13:42:16 by fminardi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{
	Bureaucrat pasquale(145, "Pasquale");
	Bureaucrat paolo(40, "Paolo");
	Bureaucrat gianmarco(76, "Gianmarco");
	Bureaucrat vincenzo(1, "Vincenzo");
	std::cout << pasquale << paolo << gianmarco << vincenzo;

	ShrubberyCreationForm a("casa"); //145,137
	RobotomyRequestForm b("rrf"); //72,45
	
	Intern someRandomIntern;
	Form* ppf;
	ppf = someRandomIntern.makeForm("presidential", "Bender");

	pasquale.signForm(a);
	std::cout << a;
	pasquale.executeForm(a);
	while (pasquale.getGrade() != a.getGrade_to_execute())
		pasquale.incrementGrade();
	pasquale.executeForm(a);
	std::cout << b;
	paolo.signForm(b);
	paolo.executeForm(b);
	vincenzo.executeForm(*ppf);
	std::cout << *ppf;
	vincenzo.signForm(*ppf);
	vincenzo.executeForm(*ppf);
	delete ppf;
}
