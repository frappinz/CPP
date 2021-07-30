#include "Karen.hpp"

int main (int ag, char *av[])
{
	Karen karen;
	std::string input;
	if (ag < 2)
		return (0);

	input.assign(av[1]);
	if (input == "WARNING")
	{
		karen.complain("Warning");
		return (0);
	}
	if (input == "DEBUG")
	{
		karen.complain("Debug");
		return (0);
	}
	if (input == "INFO")
	{
		karen.complain("Info");
		return (0);
	}
	if (input == "ERROR")
	{
		karen.complain("Error");
		return (0);
	}
	if (input == "Shut up")
	{
		std::cout << "See you in court!! BYEEEEEEE" << std::endl;
		return (0);
	}
	else
		std::cout << " * Annoing karen noises *" << std::endl;

}