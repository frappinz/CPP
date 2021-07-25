#include <cstring>
#include "contact.h"

void	Contact::setQualcosa(int i)
{
	index = i;
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

std::string Contact::getQualcosa(Contact contact, std::string needed)
{
	std::string stringa;
	if (needed == "name")
		stringa = contact.name;
	if (needed == "lastName")
		stringa = contact.lastName;
	if (needed == "phoneNumber")
		stringa = contact.phoneNumber;
	if (needed == "nickname")
		stringa = contact.nickname;
	if (needed == "index")
		stringa = std::to_string(contact.index);
	return (stringa);
	
}