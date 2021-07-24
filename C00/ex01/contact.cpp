#include <cstring>
#include "contact.h"

void	Contact::setQualcosa(Contact contact, int i)
{
	contact.index = i;
	std::cout<< i << ")\nInsert Name: ";
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

std::string Contact::getQualcosa(Contact contact, int i)
{
	std::string stringa;
	if (i == 1)
		stringa = contact.name;
	if (i == 2)
		stringa = contact.lastName;
	if (i == 3)
		stringa = contact.phoneNumber;
	if (i == 4)
		stringa = contact.nickname;
	return (stringa);
	
}