/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fminardi <fminardi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 11:35:30 by fminardi          #+#    #+#             */
/*   Updated: 2021/10/01 16:32:28 by fminardi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <exception>
#include <algorithm>
#include <vector>
#include <string>
#include <array>


class Span
{
	private:
		std::vector<int> num;
		unsigned int size;
	public:
		Span();
		Span& operator= (const Span& copy);
		Span(const Span& copy);
		~Span();
		Span(unsigned int N);
		void addNumber(int x);
		class	EnoughSpan: public std::exception
		{
			public:
				const char * what () const throw ();
		};
		class	NoSpan: public std::exception
		{
			public:
				const char * what () const throw ();
		};
		int	shortestSpan();
		int	longestSpan();

};

#endif