/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fminardi <fminardi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 17:16:03 by fminardi          #+#    #+#             */
/*   Updated: 2021/09/14 12:37:08 by fminardi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	Bureaucrat pasquale(150, "Pasquale");
	Bureaucrat paolo(50, "Paolo");
	Bureaucrat gianmarco(76, "Gianmarco");
	Bureaucrat vincenzo(1, "Vincenzo");
	std::cout << pasquale << paolo << gianmarco << vincenzo;

	Form a("Contract", 75, 60);
	try
	{
		pasquale.signForm(a);
	}
	catch(std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		Form notgood("Clausole vessatorie", 200, 200);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		std::cout << a;
		gianmarco.signForm(a);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	gianmarco.incrementGrade();
	try
	{
		gianmarco.signForm(a);
		std::cout << a;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

}
