#include "PhoneBook.h"

void	PhoneBook::adding(int j)
{
	i = j;
	system("clear");
	if (i == 9)
		for (i = 0; i < 8; i++)
			contact[i] = contact[i + 1];
	contact[i].setQualcosa(i);
	std::cout << "What do you want to do now?\n";
}

void	width();

void	PhoneBook::searching(void)
{
	int y;
	int c;
	int index;
	std::string input;

	for (y = 0; y <= i; y++)
	{
		std::cout << "|";
		std::cout << std::setw(10);
		std::cout << contact[y].getQualcosa("index") << "|";
		if (contact[y].getQualcosa("name").length() >= 10 ) 
		{

		}
		std::cout << std::setw(10);
		std::cout << contact[y].getQualcosa("name") << "|";

		// if (contact[y].getQualcosa("name").length() >= 10)
		// {
		// 	for (c = 0; c < 9; c++)
		// 	{
		// 		std::cout << contact[y].getQualcosa("name")[c];
		// 	}
		// 	std::cout << ".|";
		// }
		// else
		// {
		// 	for (c = 0; c < (10 - contact[y].getQualcosa("name").length()); c++)
		// 		std::cout << " ";
		// 	std::cout << contact[y].getQualcosa("name") << "|";
		// }
		if (contact[y].getQualcosa("lastName").length() >= 10)
		{
			for (c = 0; c < 9; c++)
			{
				std::cout << contact[y].getQualcosa("lastName")[c];
			}
			std::cout << ".|";
		}
		else
		{
			for (c = 0; c < (10 - contact[y].getQualcosa("lastName").length()); c++)
				std::cout << " ";
			std::cout << contact[y].getQualcosa("lastName") << "|";
		}
		if (contact[y].getQualcosa("nickname").length() >= 10)
		{
			for (c = 0; c < 9; c++)
			{
				std::cout << contact[y].getQualcosa("nickname")[c];
			}
			std::cout << ".|";
		}
		else
		{
			for (c = 0; c < (10 - contact[y].getQualcosa("nickname").length()); c++)
				std::cout << " ";
			std::cout << contact[y].getQualcosa("nickname") << "|";
		}
		std::cout << std::endl;
	}
	std::cout << "Open Contact: ";
	std::cin >> input;
	index = atoi(input.c_str());
	if (index >= 0 && index <= i && isdigit(input[0]))
	{
		std::cout << "NAME: "<< contact[index].getQualcosa("name") << std::endl;
		std::cout << "LAST NAME: " << contact[index].getQualcosa("lastName") << std::endl;
		std::cout << "PHONE NUMBER: "<< contact[index].getQualcosa("phoneNumber") << std::endl;
		std::cout << "NICKNAME: " << contact[index].getQualcosa("nickname") << std::endl;
		std::cout << "DARKEST SECRET: " << contact[index].getQualcosa("darkest secret") << std::endl;
	}
	else
		std::cout << "NOT FOUND!" << std::endl;
}