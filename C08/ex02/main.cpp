#include "mutantstack.hpp"
#include <list>

int main()
{
	std::cout << "*************** CORRECT OUTPUT : ***************\n";
	std::list<int> mstack;
	mstack.push_front(5);
	mstack.push_front(17);
	std::cout << mstack.front() << std::endl;
	mstack.pop_front();
	std::cout << mstack.size() << std::endl;
	mstack.push_back(3); mstack.push_back(5); mstack.push_back(737); //[...] mstack.push(0);
	std::list<int>::iterator it = mstack.begin(); 
	std::list<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite) {
		std::cout << *it << std::endl;
	++it; }


	std::cout << "\nTest with 100 random numbers\n";
	{
		std::list<int> stack2;
		int i;

		std::srand(time(NULL));
		for (i=0; i < 100; i++)		
			stack2.push_back(std::rand()%2000);
		
		for(std::list<int>::iterator it = stack2.begin(); it != stack2.end(); it++)
			std::cout << " " << *it;
		std::cout << std::endl;
	}

	std::cout << "\n*************** MY OUTPUT : ***************\n";
	{
		MutantStack<int> mstack;
		mstack.push(5);
		mstack.push(17);
		std::cout << mstack.top() << std::endl;
		mstack.pop();
		std::cout << mstack.size() << std::endl;
		mstack.push(3); mstack.push(5); mstack.push(737); //[...] mstack.push(0);
		MutantStack<int>::iterator it = mstack.begin(); 
		MutantStack<int>::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite) {
			std::cout << *it << std::endl;
		++it; }


		std::cout << "\nTest with 100 random numbers\n";
		{
			MutantStack<int> stack2;
			int i;

			std::srand(time(NULL));
			for (i=0; i < 100; i++)		
				stack2.push(std::rand()%2000);
			
			for(MutantStack<int>::iterator it = stack2.begin(); it != stack2.end(); it++)
				std::cout << " " << *it;
			std::cout << std::endl;
		}
	}
	std::stack<int, std::list<int> > s(mstack); 
	return 0;
}