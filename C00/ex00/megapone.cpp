#include <cctype>
#include <iostream>
#include <cstring>
#include <cstdio>

int main(int argc, char **argv)
{
	int y = 1;
	int i;

	while (argv[y])
	{
		i = 0;
		while (argv[y][i])
		{
			putchar(toupper(argv[y][i]));
			i++;
		}
		y++;
	}
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	std::cout << "\n";
}