/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fminardi <fminardi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 11:35:26 by fminardi          #+#    #+#             */
/*   Updated: 2021/10/01 11:35:27 by fminardi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

int main()
{
	{
		std::cout << "Easy test with vector of size 5[5, 3, 17, 9, 11]\n";
		Span sp = Span(5);
		try
		{
			sp.addNumber(5);
			sp.addNumber(3);
			sp.addNumber(17);
			sp.addNumber(9);
			sp.addNumber(11);
			std::cout << "Trying to add another number: \n";
			sp.addNumber(20);

		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}

	/* 100 NUMBERS */
	std::cout << "\nTest with 100 random numbers\n";
	{
		Span sp2 = Span(100);
		int i;

		std::srand(time(NULL));
		for (i=0; i < 100; i++)		
			sp2.addNumber(std::rand()%2000);
		std::cout << sp2.shortestSpan() << std::endl;
		std::cout << sp2.longestSpan() << std::endl;
	}

	/* 2 NUMBERS*/
	std::cout << "\nTest with 2 numbers\n";
	{
		Span sp3 = Span(2);
		try
		{
			sp3.addNumber(10);
			sp3.addNumber(2);
			std::cout << "Trying to add a third number: \n";
			sp3.addNumber(5);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		std::cout << sp3.shortestSpan() << std::endl;
		std::cout << sp3.longestSpan() << std::endl;
	}

	/* 1 NUMBER */
	std::cout << "\nTest longest span with only one number\n";
	{
		Span sp4 = Span(1);
		sp4.addNumber(2);
		try
		{
			std::cout << sp4.longestSpan() << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		
	}
}