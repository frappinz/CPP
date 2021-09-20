/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fminardi <fminardi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 15:02:04 by fminardi          #+#    #+#             */
/*   Updated: 2021/09/20 13:40:52 by fminardi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

bool is_value(float first)
{
	if (first != 0 && (isalpha(first) || !isdigit(first)))
		return true;
	return false;
}

bool is_point(std::string Num)
{
	std::string s = Num;
	int n = s.length();
	char a[n + 1];
	strcpy(a, s.c_str());

	for (int i = 0; i < n; i++)
	{
		if (a[i] == '.')
		{
			if (a[n - 1] == '0' || (a[n - 2] == '0' && a[n - 1] == 'f'))
				return false;
			return (true);
		}
	}
	return (false);
}

int main (int argc, char *argv[])
{
	int integer = 0;
	float _float = 0.0f;
	double _double = 0.0;
	char c;
	float first;
	if (argc == 1)
	{
		std::cout << "Wrong arguments\n";
		return (0);
	}
	std::string num = argv[1];
	first = atof(num.c_str());
	_float = static_cast<float> (first);
	integer = static_cast<int> (first);
	_double = static_cast<double> (first);
	c = static_cast<char> (first);
	bool point = is_point(num);
	bool values = is_value(first);
	if (first == 0 || (!point && !values)) //if value is 0 or is int and not inf and nan
	{
		std::cout << "float: " << _float << ".0f" << std::endl;
		std::cout << "int: " << integer << std::endl;
		std::cout << "double: " << _double << ".0" << std::endl;
		if (isprint(c))
			std::cout << "char: '" << c << "'" << std::endl;
		else
			std::cout << "char: Not displayable" << std::endl;
		return 0;
	}
	if (point || values) // se é double/float o é inf/nan
	{
		std::cout << "float: " << _float << "f" << std::endl;
		if (values)
			std::cout << "int: Impossible" << std::endl;
		else
			std::cout << "int: " << integer << std::endl;
		std::cout << "double: " << _double << std::endl;
		if (isprint(c))
			std::cout << "char: '" << c << "'" << std::endl;
		else if (values)
			std::cout << "char: Impossible" << std::endl;
		else
			std::cout << "char: Not displayable" << std::endl;
	}
}