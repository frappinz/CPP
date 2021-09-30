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
	return ("Too much elements\n");
}

void Span::addNumber(int x)
{
	if(num.back() != 0)
	 	throw EnoughSpan();
	num.insert(num.begin(), 1, x);
	num.pop_back();
	for (std::vector<int>::iterator it = num.begin() ; it != num.end(); ++it)
    	std::cout << ' ' << *it;
	std::cout << std::endl;
}
