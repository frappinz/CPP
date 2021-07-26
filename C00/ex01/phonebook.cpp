#include "PhoneBook.h"

void	PhoneBook::adding(int j)
{
	i = j;
	system("clear");
	if (j >= 8)
	{
		j = j % 8;
		i = 7;//contact[i % 8].index = i % 8;
	}
	contact[j].setQualcosa(j);
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
		std::cout << std::setw(10);
		std::cout << contact[y].getQualcosa("index") << "|";
		if (contact[y].getQualcosa("name").length() >= 10 ) 
			width(contact[y].getQualcosa("name"));
		else
			std::cout << std::setw(10) << contact[y].getQualcosa("name");
		std::cout << "|";
		if (contact[y].getQualcosa("lastName").length() >= 10 ) 
			width(contact[y].getQualcosa("lastName"));
		else
			std::cout << std::setw(10) << contact[y].getQualcosa("lastName");
		std::cout << "|";
		if (contact[y].getQualcosa("nickname").length() >= 10 ) 
			width(contact[y].getQualcosa("nickname"));
		else
			std::cout << std::setw(10) << contact[y].getQualcosa("nickname");
		std::cout << "|";
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