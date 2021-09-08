#include "Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat kikko(151, "kikko");
		std::cout << kikko;
	}
	catch( std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		Bureaucrat kikko1(150, "kikko1");
		std::cout << kikko1;
		Bureaucrat kikko2(0, "kikko2");
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	Bureaucrat ok(150, "ok");
	try
	{
		ok.decrementGrade();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

}