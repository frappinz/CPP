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
			contact[i].setQualcosa(i);
			std::cout << "What do you want to do now?\n";
		}
		else if (string == "SEARCH")
		{
			std::cout << "|  index   |   name   | lastname | nickname |\n";
			for (y = 0; y <= i; y++)
			{
				std::cout << "|         " << contact->getQualcosa(contact[y], "index") << "|";
				if (contact->getQualcosa(contact[y], "name").length() >= 10)
				{
					for (c = 0; c < 9; c++)
					{
						std::cout << contact->getQualcosa(contact[y], "name")[c];
					}
					std::cout << ".|";
				}
				else
				{
					for (c = 0; c < (10 - contact->getQualcosa(contact[y], "name").length()); c++)
						std::cout << " ";
					std::cout << contact->getQualcosa(contact[y], "name") << "|";
				}
				std::cout << std::endl;
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