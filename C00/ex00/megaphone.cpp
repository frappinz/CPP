/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fminardi <fminardi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/26 11:59:56 by fminardi          #+#    #+#             */
/*   Updated: 2021/08/26 11:59:57 by fminardi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cctype>
#include <iostream>
#include <cstring>
#include <cstdio>

int main(int argc, char **argv)
{
	int y = 1;

	std::string string;
	if (argc > 1)
	{
		while (argv[y])
		{
			string.append(argv[y]);
			y++;
		}
		y = 0;
		while (string[y])
		{
			string[y] = toupper(string[y]);
			y++;
		}
		std::cout << string << std::endl;
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
}