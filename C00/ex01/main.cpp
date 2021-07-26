#include "PhoneBook.hpp"

int main ()
{
	system("clear");
	PhoneBook book;
	std::string string;
	int j = -1;

	std::cout << "Write \"ADD\" to add a new contact, \"SEARCH\" to search a contact, \"EXIT\" to quit\n";
	while (1)
	{
		std::cout << "Command: ";
		std::cin >> string;
		if (!string.compare("ADD"))
		{
			j++;
			book.adding(j);
		}
		else if (!string.compare("SEARCH"))
		{
			std::cout << "|  index   |   name   | lastname | nickname |\n";
			book.searching();
		}
		else if (!string.compare("EXIT"))
		{
			system("clear");
			std::cout << "GOODBYE\n";
			return (0);
		}
		else
		{
			system("clear");
			std::cout << "only ADD, SEARCH or EXIT\n";
		}
	}
	return (0);
}