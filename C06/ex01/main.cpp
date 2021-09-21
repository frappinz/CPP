/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fminardi <fminardi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 13:33:55 by fminardi          #+#    #+#             */
/*   Updated: 2021/09/20 13:33:55 by fminardi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

int main()
{
	Data *a = new Data;
	uintptr_t ptr = serialize(a);
	Data *b = deserialize(ptr);


	std::cout << a << std::endl;
	std::cout << ptr << std::endl;
	std::cout << b << std::endl;

	delete a;

}