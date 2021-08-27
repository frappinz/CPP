/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fminardi <fminardi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/26 12:00:08 by fminardi          #+#    #+#             */
/*   Updated: 2021/08/26 14:47:18 by fminardi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main ()
{
	system("clear");
	PhoneBook book;
	std::string string;
	int j = -1;

	std::cout << "Write \"ADD\" to add a new contact, \"SEARCH\" to search a contact, \"EXIT\" to quit\n";
	while (1)
	{
		std::cout << "Command: ";
		std::getline(std::cin, string);
		if (!string.compare("ADD"))
		{
			j++;
			book.adding(j);
		}
		else if (!string.compare("SEARCH"))
		{
			std::cout << "|  index   |   name   | lastname | nickname |\n";
			book.searching();
		}
		else if (!string.compare("EXIT"))
		{
			system("clear");
			std::cout << "GOODBYE\n";
			return (0);
		}
		else
		{
			system("clear");
			std::cout << "only ADD, SEARCH or EXIT\n";
		}
	}
	return (0);
}