#include "iter.hpp"
int main()
{
	std::string arr1[3] = {"Stringa1", "Stringa2", "Stringa3"};
	int			arr2[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

	iter(arr1, 6, acaso(arr1[2], arr1[5]));
}