#include <string>
#include <iostream>
//#define MAX_SIZE_T 18446744073709551615

bool one_number(std::string Num)
{
	std::string s = Num;
	int n = s.length();
	char a[n + 1];
	strcpy(a, s.c_str());

	for (int i = 0; i < n; i++)
	{
		if (a[i] >= '0' && a[i] <= '9')
			return (true);
	}
	return (false);
}

int main (int argc, char *argv[])
{
	//Check arguments
	if (argc == 1)
	{
		std::cout << "Wrong arguments\n";
		return (0);
	}
	std::string num = argv[1];
	bool number = one_number(num);
	if (number)
	{
		size_t found = num.find("f");
		if (found > 0 && found!=std::string::npos)
		{
			std::cout << "é un float!!\n";
		}
		found = num.find(".");
		if (found > 0 && found!=std::string::npos)
		{
			std::cout << "is a double!!\n";
		}
		else
			std::cout << "no\n";
		double integer = atof(num.c_str());
		std::cout << integer << std::endl;
	}
	else
	{
		std::cout << "only letters\n";
	}
}