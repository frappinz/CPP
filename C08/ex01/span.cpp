/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 22:43:06 by marvin            #+#    #+#             */
/*   Updated: 2021/09/30 23:39:00 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

Span::Span(unsigned int N)
{
	num.resize(N);
	size = N;
}
const char *Span::EnoughSpan::what () const throw ()
{
	return ("Too much elements\n");
}

const char *Span::NoSpan::what () const throw ()
{
	return ("Not enough numbers\n");
}

void Span::addNumber(int x)
{
	if(num.back() != 0)
	 	throw EnoughSpan();
	num.insert(num.begin(), 1, x);
	num.pop_back();
}

int	Span::shortestSpan()
{
	if (size < 2 || (num.at(0) == 0 || num.at(1) == 0))
		throw (NoSpan());
	unsigned int shortest = 2147483647;
	std::vector<int>::iterator y = num.begin();
	std::vector<int>::iterator i;
	for(y = num.begin(); y != num.end(); y++)
	{
		for(i = num.begin() + 1; i != num.end(); ++i)
		{
			if ((unsigned int)(*y - *i) < shortest && *y != *i)
				shortest = (*y - *i);
		}
	}
	return (shortest);
}


int	Span::longestSpan(){

	if (num.at(0) == 0 || num.at(1) == 0)
		throw (NoSpan());
	std::vector<int>::iterator it_min = std::min_element(num.begin(), num.end());
	std::vector<int>::iterator it_max = std::max_element(num.begin(), num.end());
	return (*it_max - *it_min);
}
