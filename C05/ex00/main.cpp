/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fminardi <fminardi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 17:15:49 by fminardi          #+#    #+#             */
/*   Updated: 2021/09/09 17:15:50 by fminardi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat kikko(151, "kikko");
		std::cout << kikko;
	}
	catch( std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		Bureaucrat kikko1(150, "kikko1");
		std::cout << kikko1;
		Bureaucrat kikko2(0, "kikko2");
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	Bureaucrat ok(150, "ok");
	std::cout << ok;
	try
	{
		std::cout << "Decrementing < ok >\n";
		ok.decrementGrade();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	Bureaucrat a(1, "Gianpaolo");
	std::cout << a;
	try
	{
		std::cout << "Incrementing < Gianpaolo >\n";
		a.incrementGrade();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	Bureaucrat pippo(6, "Pippo");
	std::cout << pippo;
	try
	{
		std::cout << "Incrementing < Pippo >\n";
		pippo.incrementGrade();
		std::cout << pippo;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

}