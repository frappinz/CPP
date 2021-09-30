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