/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fminardi <fminardi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 22:43:06 by marvin            #+#    #+#             */
/*   Updated: 2021/10/01 16:33:53 by fminardi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

Span::Span(){}
Span::~Span(){}
Span::Span(unsigned int N)
{
	num.reserve(N);
	size = N;
}
const char *Span::EnoughSpan::what () const throw ()
{
	return ("Too much elements");
}

const char *Span::NoSpan::what () const throw ()
{
	return ("Not enough numbers");
}

void Span::addNumber(int x)
{
	if(num.size() >= size)
	 	throw EnoughSpan();
	num.push_back(x);
}

int	Span::shortestSpan()
{
	if (size < 2 || (num.at(0) == 0 || num.at(1) == 0))
		throw (NoSpan());
	int num1;
	int num2;
	unsigned int shortest = 2147483647;	
	std::vector<int>::iterator y = num.begin();
	std::vector<int>::iterator i;
	for(y = num.begin(); y != num.end(); y++)
	{
		for(i = num.begin() + 1; i != num.end(); ++i)
		{
			if ((unsigned int)(*y - *i) < shortest && *y != *i)
			{
				shortest = (*y - *i);
				num1 = *y;
				num2 = *i;
			}
		}
	}
	std::cout << "Shortest span ("  << num1 << ", " << num2 << "): ";
	return (shortest);
}

int	Span::longestSpan()
{
	if (size < 2 || (num.at(0) == 0 || num.at(1) == 0))
		throw (NoSpan());
	std::vector<int>::iterator it_min = std::min_element(num.begin(), num.end());
	std::vector<int>::iterator it_max = std::max_element(num.begin(), num.end());
	std::cout << "Longest span ("  << *it_max << ", " << *it_min << "): ";
	return (*it_max - *it_min);
}

Span& Span::operator= (const Span& copy)
{
	num = copy.num;
	size = copy.size;

	return *this;
}

Span::Span(const Span& copy)
{
	*this = copy;
}