#include <iostream>

int main ()
{
	std::string str1 = "HI THIS IS BRAIN";

	std::string *ptr = &str1;
	std::string &ref = str1;

	std::cout << "Address of string [&] -> " << &str1 << std::endl;
	std::cout << "Address with stringPTR -> " << ptr << "\nAddress with stringREF -> " << &ref;

	std::cout << "\nString with stringPTR ->  " << *ptr;
	std::cout << "\nString with stringREF ->  " << ref << std::endl;

}