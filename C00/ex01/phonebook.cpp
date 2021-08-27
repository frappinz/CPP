/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fminardi <fminardi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/26 12:00:11 by fminardi          #+#    #+#             */
/*   Updated: 2021/08/26 14:47:46 by fminardi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void	PhoneBook::adding(int j)
{
	i = j;
	system("clear");
	if (j >= 8)
	{
		j = j % 8;
		i = 7;
	}
	contact[j].setContact(j);
	std::cout << "What do you want to do now?\n";
}

void	width(std::string need)
{
	std::string str;

	str.append(need, 0, 9);
	std::cout << str << ".";
}

void	PhoneBook::searching(void)
{
	int y;
	int index;
	std::string input;

	for (y = 0; y <= i; y++)
	{
		std::cout << "|";
		std::cout << "         " <<contact[y].getContact("index");
		std::cout << "|";
		if (contact[y].getContact("name").length() >= 10 ) 
			width(contact[y].getContact("name"));
		else
			std::cout << std::setw(10) << contact[y].getContact("name");
		std::cout << "|";
		if (contact[y].getContact("lastName").length() >= 10 )
			width(contact[y].getContact("lastName"));
		else
			std::cout << std::setw(10) << contact[y].getContact("lastName");
		std::cout << "|";
		if (contact[y].getContact("nickname").length() >= 10 ) 
			width(contact[y].getContact("nickname"));
		else
			std::cout << std::setw(10) << contact[y].getContact("nickname");
		std::cout << "|";
		std::cout << std::endl;
	}
	std::cout << "Open Contact: ";
	std::getline(std::cin, input);
	index = atoi(input.c_str());
	if (index >= 0 && index <= i && isdigit(input[0]))
	{
		std::cout << "NAME: "<< contact[index].getContact("name") << std::endl;
		std::cout << "LAST NAME: " << contact[index].getContact("lastName") << std::endl;
		std::cout << "PHONE NUMBER: "<< contact[index].getContact("phoneNumber") << std::endl;
		std::cout << "NICKNAME: " << contact[index].getContact("nickname") << std::endl;
		std::cout << "DARKEST SECRET: " << contact[index].getContact("darkest secret") << std::endl;
	}
	else
		std::cout << "NOT FOUND!" << std::endl;
}