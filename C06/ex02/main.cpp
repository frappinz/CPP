/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fminardi <fminardi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 13:33:45 by fminardi          #+#    #+#             */
/*   Updated: 2021/09/20 13:33:45 by fminardi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include <cstdlib>
#include <stdlib.h>
#include <ctime>

Base * generate(void)
{
	std::srand(std::time(NULL));

	Base *newbase = NULL;
	switch (std::rand()%3)
	{
	case 0:
		newbase = new A;
		break ;
	case 1:
		newbase = new B;
		break ;
	case 2: 
		newbase = new C;
		break ;
	}
	return (newbase);
}

void identify(Base* p)
{
	A* ptrA = dynamic_cast<A*>(p);
	B* ptrB = dynamic_cast<B*>(p);
	C* ptrC = dynamic_cast<C *>(p);

	if (ptrA == p)
		std::cout << "Pointer: A" << std::endl;
	if (ptrB == p)
		std::cout << "Pointer: B" << std::endl;
	if (ptrC == p)
		std::cout << "Pointer: C" << std::endl;
}

void identify(Base& p)
{
	try
	{
		A refA = dynamic_cast<A&>(p);
		std::cout << "Reference: A" << std::endl;
	}
	catch(const std::exception& e)
	{
		try
		{
			B refB = dynamic_cast<B&>(p);
			std::cout << "Reference: B" << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cout << "Reference: C" << std::endl;
		}
	}
}
int main()
{
	Base *what = generate();
	
	identify(what);
	identify(*what);

	delete what;
}