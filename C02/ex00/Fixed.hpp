#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
	private:
		int fp;
		static const int bits = 8;
	public:
		Fixed();
		~Fixed();
		Fixed (const Fixed& fixed);
		Fixed& operator= (const Fixed& assign);
		int getRawBits(void) const;
		void setRawBits(int const raw);
};

#endif