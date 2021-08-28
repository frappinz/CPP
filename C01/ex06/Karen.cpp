/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fminardi <fminardi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 11:55:53 by fminardi          #+#    #+#             */
/*   Updated: 2021/08/28 11:55:53 by fminardi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

Karen::Karen()
{
	levArr[0] = "DEBUG";
	levArr[1] = "INFO";
	levArr[2] = "WARNING";
	levArr[3] = "ERROR";
}

void Karen::error(void)
{
	std::cout << "[ERROR] This is unacceptable, I want to speak to the manager now." << std::endl;
}

void Karen::warning(void)
{
	std::cout <<"[WARNING] I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month." << std::endl;
}

void Karen::info(void)
{
	std::cout << "[INFO]I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!" << std::endl;
}

void Karen::debug(void)
{
	std::cout << "[DEBUG] I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
}


void Karen::complain(std::string level)
{
	int i = 0;

	arr[0] = &Karen::debug; 
	arr[1] = &Karen::info;
	arr[2] = &Karen::warning;
	arr[3] = &Karen::error; 

	for (i = 0; i < 4; i++)
	{
		if (levArr[i] == level)
			break ;
	}
	while (i < 4)
	{
		(this->*arr[i])();
		i++;
	}

}
