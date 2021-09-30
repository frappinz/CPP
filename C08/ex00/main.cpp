/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fminardi <fminardi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 17:32:53 by fminardi          #+#    #+#             */
/*   Updated: 2021/09/30 17:32:54 by fminardi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
	std::vector<int> ints;
	std::string pushing;
	int pushed;
	std::string tofound;
	std::cout << "Insert integers (press \".\" to stop)\n";
	while (strcmp(pushing.c_str(), "."))
	{
		std::getline(std::cin, pushing);
		pushed = atoi(pushing.c_str());
		ints.push_back(pushed);
	}
	ints.pop_back();
	std::cout << "Vector contains:";
	for (std::vector<int>::iterator it = ints.begin() ; it != ints.end(); ++it)
    	std::cout << ' ' << *it;
	std::cout << std::endl;
	std::cout << "Insert the number you want to find:\n";
	std::getline(std::cin, pushing);
	pushed = atoi(pushing.c_str());
	try
	{
		int found = easyfind(ints, pushed) - ints.begin();
		std::cout << "The number has been found in position: " << found << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
}