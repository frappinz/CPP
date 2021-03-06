/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fminardi <fminardi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 17:16:03 by fminardi          #+#    #+#             */
/*   Updated: 2021/09/13 14:37:29 by fminardi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	Bureaucrat pasquale(145, "Pasquale");
	Bureaucrat paolo(40, "Paolo");
	Bureaucrat gianmarco(76, "Gianmarco");
	Bureaucrat vincenzo(1, "Vincenzo");
	std::cout << pasquale << paolo << gianmarco << vincenzo;

	ShrubberyCreationForm a("casa"); //145,137
	RobotomyRequestForm b("rrf"); //72,45
	PresidentialPardonForm c("Cat"); //25,5
	
	pasquale.signForm(a);
	std::cout << a;
	pasquale.executeForm(a);
	while (pasquale.getGrade() != a.getGrade_to_execute())
		pasquale.incrementGrade();
	pasquale.executeForm(a);
	std::cout << b;
	paolo.signForm(b);
	paolo.executeForm(b);
	vincenzo.executeForm(c);
	std::cout << c;
	vincenzo.signForm(c);
	vincenzo.executeForm(c);


}
