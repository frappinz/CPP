#include <iostream>
#include "contact.h"

int main ()
{
	system("clear");
	Contact contact[9];
	std::string string;
	int i = -1;
	int c = 0;
	int y = 0;
	int length;

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
					contact[i] = contact[i + 1];
			contact[i].setQualcosa(contact[i], i);
			std::cout << "RECAP:\nName and Lastname: " << contact->getQualcosa(contact[i], 1) << " " << contact->getQualcosa(contact[i], 2);
			std::cout << "\nNumber: " << contact->getQualcosa(contact[i], 3) << "\nNickname : " << contact->getQualcosa(contact[i], 4) << std::endl;
			std::cout << "What do you want to do now?\n";
			std::cout << "il nome alla posizione 0 é " << contact->getQualcosa(contact[0], 1) << std::endl;
		}
		else if (string == "SEARCH")
		{
			std::cout << "|  index   |   name   | lastname | nickname |\n|";
			//std::cout << contact->getQualcosa(contact[y], 1).length();
			if (contact->getQualcosa(contact[y], 1).length() >= 10)
			{
				for (c = 0; c < 9; c++)
				{
					std::cout << contact->getQualcosa(contact[y], 1)[c];
				}
				std::cout << ".|";
			}
			else
			{
				std::cout << "miao";
			}

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

		// string = contact->getQualcosa();
		// std::cout << string;
	}
	return (0);
}