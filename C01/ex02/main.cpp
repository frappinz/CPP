/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fminardi <fminardi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 11:56:19 by fminardi          #+#    #+#             */
/*   Updated: 2021/08/28 11:56:19 by fminardi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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