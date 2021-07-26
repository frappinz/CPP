#include <cstring>
#include "Contact.hpp"

void	Contact::setQualcosa(int i)
{
	index = i;
	std::cout << "Insert Name: ";
	std::cin >> name;
	system("clear");
	std::cout<< "Insert Last Name: ";
	std::cin >> lastName;
	system("clear");
	std::cout<< "Insert Phone Number: ";
	std::cin >> phoneNumber;
	system("clear");
	std::cout<< "Insert Nickname: ";
	std::cin >> nickname;
	system("clear");
	std::cout<< "Insert Darkest Secret: ";
	std::cin >> darkestSecret;
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

std::string Contact::getQualcosa(std::string needed)
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