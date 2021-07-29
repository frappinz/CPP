#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

int main (int argc, char **argv)
{
	std::string str1;
	std::string str2;
	std::string filename;
	std::ifstream filein;
	std::ofstream fileout;
	std::string tmp;
	int i = 0;
	char c;

	if (argc < 4)
	{
		std::cout << "Wrong number of arguments\n";
		return (0);
	}
	str1.assign(argv[2]);
	str2.assign(argv[3]);
	if (str1.empty() || str2.empty())
	{
		std::cout << "String shouldn't be empty!" << std::endl;
		return (0);
	}
	filename.assign(argv[1]);
	filein.open(filename);
	while (filein.get(c))
	{
		if (c == str1[i])
		{
			tmp.append(1, c);
			while (i < str1.length() - 1)
			{
				filein.get(c);
				tmp.append(1, c);
				i++;
			}
			i = 0;
			if (!str1.compare(tmp))
				fileout << str2;
			else
				fileout << tmp;
			tmp.clear();
		}
		else
			fileout << c;
	}
}