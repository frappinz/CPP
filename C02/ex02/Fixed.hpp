#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
	private:
		int fp;
		static const int bits = 8;
	public:
		Fixed();
		Fixed(const int n);
		Fixed(const float n);
		~Fixed();
		Fixed (const Fixed& fixed);
		Fixed& operator= (const Fixed& assign);
		Fixed operator ++ ();
		Fixed operator ++(int);
		Fixed operator -- ();
		Fixed operator --(int);
		bool operator< (const Fixed& fix) const;
		bool operator> (const Fixed& fix) const;
		bool operator<=(const Fixed& fix) const;
		bool operator>=(const Fixed& fix) const;
		bool operator==(const Fixed& fix) const;
		bool operator!=(const Fixed& fix) const;
		Fixed operator+(const Fixed& fix) const;
		Fixed operator-(const Fixed& fix) const;
		Fixed operator*(const Fixed& fix) const;
		Fixed operator/(const Fixed& fix) const;
		static Fixed & min(Fixed &a, Fixed &b);
		const static Fixed & min(const Fixed &a, const Fixed &b);
		static Fixed & max(Fixed &a, Fixed &b);
		const static Fixed & max(const Fixed &a, const Fixed &b);
		int getRawBits(void) const;
		void setRawBits(int const raw);
		float toFloat( void ) const;
		int toInt( void ) const;
};

		std::ostream& operator<<(std::ostream& out, const Fixed& f);
#endif