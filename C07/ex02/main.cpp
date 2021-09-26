/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fminardi <fminardi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 17:19:37 by fminardi          #+#    #+#             */
/*   Updated: 2021/09/26 13:39:02 by fminardi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include "Array.hpp"

int main()
{
	Array<int> arr0;
	Array<std::string> arr1(11);
	arr1[0] = "MONTERO"; 
	arr1[1] = "DEAD RIGHT NOW";
	arr1[2] = "THATS WHAT I WANT";
	arr1[3] = "INDUSTRY BABY";
	arr1[4] = "SCOOP";
	arr1[5] = "ONE OF ME";
	arr1[6] = "LOST IN CITADEL";
	arr1[7] = "THE ART OF REALIZATION";
	arr1[8] = "AM I DREAMING";
	arr1[9] = "LIFE AFTER SALEM";
	arr1[10] = "SUN GOES DOWN";

	std::cout << "Size of array of string is: " << arr1.size() << std::endl;
	try
	{
		arr1[11] = "affammoc";
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	Array<int> arr2(5);
	arr2[0] = 1; 
	arr2[1] = 2;
	arr2[2] = 3;
	arr2[3] = 4;
	arr2[4] = 5;

	Array<int> arr3 = arr2;
	Array<int> arr4(arr3);
	Array<int> arr5;
	std::cout << "Size of array of int is: "<< arr2.size() << std::endl;
	try
	{
		arr2[5] = 6;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		arr3[5] = 44;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	

// #include <iostream>
// #include "Array.hpp"

// #define MAX_VAL 750
// int main(int, char**)
// {
//     Array<int> numbers(MAX_VAL);
//     int* mirror = new int[MAX_VAL];
//     srand(time(NULL));
//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         const int value = rand();
//         numbers[i] = value;
//         mirror[i] = value;
//     }
//     //SCOPE
//     {
//         Array<int> tmp = numbers;
//         Array<int> test(tmp);
//     }

//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         if (mirror[i] != numbers[i])
//         {
//             std::cerr << "didn't save the same value!!" << std::endl;
//             return 1;
//         }
//     }
//     try
//     {
//         numbers[-2] = 0;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }
//     try
//     {
//         numbers[MAX_VAL] = 0;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }

//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         numbers[i] = rand();
//     }
//     delete [] mirror;//
//     return 0;
// }
}