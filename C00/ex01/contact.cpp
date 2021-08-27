/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fminardi <fminardi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/26 12:00:01 by fminardi          #+#    #+#             */
/*   Updated: 2021/08/26 14:50:07 by fminardi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include "Contact.hpp"

void	Contact::setContact(int i)
{
	index = i;
	std::cout << "Insert Name: ";
	std::getline(std::cin, name);
	system("clear");
	std::cout<< "Insert Last Name: ";
	std::getline(std::cin, lastName);
	system("clear");
	std::cout<< "Insert Phone Number: ";
	std::getline(std::cin, phoneNumber);
	system("clear");
	std::cout<< "Insert Nickname: ";
	std::getline(std::cin, nickname);
	system("clear");
	std::cout<< "Insert Darkest Secret: ";
	std::getline(std::cin, darkestSecret);
	system("clear");

}

std::string itoa(int index)
{
	char  str[1];
	std::string stringa;

	str[0] = index + 48;
	stringa.append(str);
	return (stringa);
}

std::string Contact::getContact(std::string needed)
{
	std::string stringa;

	if (needed == "name")
		stringa = name;
	if (needed == "lastName")
		stringa = lastName;
	if (needed == "phoneNumber")
		stringa = phoneNumber;
	if (needed == "nickname")
		stringa = nickname;
	if (needed == "index")
		stringa = itoa(index);
	if (needed == "darkest secret")
		stringa = darkestSecret;
	return (stringa);
	
}