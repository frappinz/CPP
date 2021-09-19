#include "Data.hpp"

int main()
{
	Data *a = new Data;
	std::cout << "Address before serialization: " << a << std::endl;
	uintptr_t ptr = serialize(a);
	Data *b = new Data;
	std::cout << "Address after serialization: " << &ptr << std::endl;
	a = deserialize(ptr);
	std::cout << "Address after serialization: " << a << std::endl;


	std::cout << a << std::endl;
	std::cout << ptr << std::endl;
	std::cout << b << std::endl;

}