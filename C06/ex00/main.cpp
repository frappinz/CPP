#include <string>
#include <iostream>

int main (int argc, char *argv[])
{
	std::string::size_type sz;
	if (argc == 1)
	{
		std::cout << "Wrong arguments\n";
		return (0);
	}
	std::string num = argv[1];
	int integer = std::stoi(num, &sz);
	double _double = atof(num);
	float _float = stof
}