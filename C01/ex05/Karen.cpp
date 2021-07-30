#include "Karen.hpp"

Karen::Karen()
{
	levArr[0] = "Debug";
	levArr[1] = "Info";
	levArr[2] = "Warning";
	levArr[3] = "Error";
}

void Karen::error(void)
{
	std::cout << "I'M CALLING MY COUSIN, HE'S A LAWYER" << std::endl;
}

void Karen::warning(void)
{
	std::cout << "alle frasi" << std::endl;
}

void Karen::info(void)
{
	std::cout << "di pensare ora" << std::endl;
}

void Karen::debug(void)
{
	std::cout << "non ho sbatti" << std::endl;
}


void Karen::complain(std::string level)
{
	int i;

	arr[0] = &Karen::debug; //level "debug" index = 0;
	arr[1] = &Karen::info; // level "info" index = 1;
	arr[2] = &Karen::warning; //level "warning" index = 2;
	arr[3] = &Karen::error; //level "error" index = 3;

	for (i=0; i < 4; i++)
	{
		if (levArr[i] == level)
			break;
	}
	(this->*arr[i])();
}
