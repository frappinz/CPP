#include <iostream>
#include <string>
#include <fstream>
#include <sstream>


bool is_empty(std::ifstream& pFile)
{
    return pFile.peek() == std::ifstream::traits_type::eof();
}

int isEqual()

int main (int argc, char **argv)
{
	std::string str1;
	std::string str2;
	std::string filename;
	std::ifstream filein;
	std::ofstream fileout;
	int i;
	char c;

	if (argc < 4)
	{
		std::cout << "Wrong number of arguments\n";
		return (0);
	}
	str1.assign(argv[2]);
	str2.assign(argv[3]);
	filename.assign(argv[1]);
	filein.open(filename);
	/*
	if (!is_empty(filein))
	{
		std::cout << "File is empty or doesn't exist!\n";
		return (0);
	}*/
	fileout.open(filename + ".replace");
	while (filein.get(c))
	{
		if (c == str1[i])
		{
			
		}
		std::cout << c;
		return (0);
		fileout << c;
	}


}