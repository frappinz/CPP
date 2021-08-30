/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fminardi <fminardi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 15:32:12 by fminardi          #+#    #+#             */
/*   Updated: 2021/08/30 15:32:12 by fminardi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
		int getRawBits(void) const;
		void setRawBits(int const raw);
		float toFloat( void ) const;
		int toInt( void ) const;
};

		std::ostream& operator<<(std::ostream& out, const Fixed& f);
#endif