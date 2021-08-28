#include "Karen.hpp"

int main (int ag, char *av[])
{
	Karen karen;
	std::string input;
	int i = 4;
	if (ag < 2)
		return (0);

	input.assign(av[1]);
	std::string ldb[4];

	ldb[0] = "DEBUG";
	ldb[1] = "INFO";
	ldb[2] = "WARNING";
	ldb[3] = "ERROR";

	for (i = 0; i < 4; i++)
	{
		if (input == ldb[i])
			break;
	}
	switch (i)
	{
	case 0:
		karen.complain("DEBUG");
		break;
	case 1:
		karen.complain("INFO");
		break;
	case 2:
		karen.complain("WARNING");
		break;
	case 3:
		karen.complain("ERROR");
		break;
	default:
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
		break;
	}

}