/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fminardi <fminardi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 12:56:03 by fminardi          #+#    #+#             */
/*   Updated: 2021/10/02 12:56:04 by fminardi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"
#include "../ex00/easyfind.hpp"
#include <list>

int main()
{
	std::cout << "\n\n\033[0;36mTEST 1\033[0;37m\n\n";
	std::cout << "Subject main\n\n";

	{
		std::cout << "*************** EXPECTED OUTPUT ***************\n";
		std::list<int> mstack1;
		mstack1.push_front(5);
		mstack1.push_front(17);
		std::cout << mstack1.front() << std::endl;
		mstack1.pop_front();
		std::cout << mstack1.size() << std::endl;
		mstack1.push_back(3); mstack1.push_back(5); mstack1.push_back(737);
		std::list<int>::iterator it = mstack1.begin(); 
		std::list<int>::iterator ite = mstack1.end();
		++it;
		--it;
		while (it != ite) {
			std::cout << *it << std::endl;
		++it; }
	}

	std::cout << "\n*************** MY OUTPUT ***************\n";
	{
		MutantStack<int> mstack2;
		mstack2.push(5);
		mstack2.push(17);
		std::cout << mstack2.top() << std::endl;
		mstack2.pop();
		std::cout << mstack2.size() << std::endl;
		mstack2.push(3); mstack2.push(5); mstack2.push(737);
		MutantStack<int>::iterator it = mstack2.begin(); 
		MutantStack<int>::iterator ite = mstack2.end();
		++it;
		--it;
		while (it != ite) {
			std::cout << *it << std::endl;
		++it; }
		std::stack<int> s(mstack2); 
	}

	std::cout << "\n\n\033[0;36mTEST 2\033[0;37m\n\n";
	{
		std::cout << "Test with 100 random numbers\n\n";
		std::cout << "*************** EXPECTED OUTPUT ***************\n";
		{
			std::list<int> mstack3;
			int i;

			std::srand(time(NULL));
			for (i=0; i < 100; i++)		
				mstack3.push_back(std::rand()%2000);
			
			for(std::list<int>::iterator it = mstack3.begin(); it != mstack3.end(); it++)
				std::cout << " " << *it;
			std::cout << std::endl;
		}
		
		std::cout << "\n*************** MY OUTPUT ***************\n";
		{
			MutantStack<int> mstack4;
			int i;

			std::srand(time(NULL));
			for (i=0; i < 100; i++)		
				mstack4.push(std::rand()%2000);
			
			for(MutantStack<int>::iterator it = mstack4.begin(); it != mstack4.end(); it++)
				std::cout << " " << *it;
			std::cout << std::endl;
		}
	}

	std::cout << "\n\n\033[0;36mTEST 3\033[0;37m\n\n";
	std::cout << "Finding the position of a number\n\n";
	{
		std::cout << "*************** EXPECTED OUTPUT ***************\n";
		std::vector<int> mstack5;
		int i;
		int to_find;

		std::srand(time(NULL));
		for (i=0; i < 100; i++)		
			mstack5.push_back(std::rand()%100);
		std::srand(time(NULL));
		try
		{
			to_find = easyfind(mstack5, 50) - mstack5.begin();
			std::cout << "The number has been found in position: " << to_find << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	{
		std::cout << "\n*************** MY OUTPUT ***************\n";
		MutantStack<int> mstack6;
		int i;
		int to_find;

		std::srand(time(NULL));
		for (i=0; i < 100; i++)		
			mstack6.push(std::rand()%100);
		std::srand(time(NULL));
		try
		{
			to_find = easyfind(mstack6, 50) - mstack6.begin();
			std::cout << "The number has been found in position: " << to_find << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}

	return 0;
}