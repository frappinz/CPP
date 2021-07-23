#include <iostream>
#include "contact.h"

int main ()
{
	Contact contact[9];
	std::string string;
	int i = -1;

	std::cout << "Write \"ADD\" to add a new contact, \"SEARCH\" to search a contact, \"EXIT\" to quit\n";
	while (1)
	{
		std::cin >> string;
		if (string == "ADD")
		{
			system("clear");
			i++;
			if (i == 9)
				for (i = 0; i < 8; i++)
					contact[i + 1] = contact[i];
			contact[i].setQualcosa(contact[i], i);
			std::cout << "RECAP:\nName and Lastname: " << contact->getQualcosa(contact[i], 1) << " " << contact->getQualcosa(contact[i], 2);
			std::cout << "\nNumber: " << contact->getQualcosa(contact[i], 3) << "\nNickname : " << contact->getQualcosa(contact[i], 4) << std::endl;
			std::cout << "What do you want to do now?\n";
		}
		else if (string == "SEARCH")
		{
			std::cout << "waaa\n";
		}
		else if (string == "EXIT")
		{
			std::cout << "adios\n";
			return (0);
		}
		else
		{
			std::cout << "noccapito\n";
		}

		//string = contact->getQualcosa();
		//std::cout << string;
	}
	return (0);
}