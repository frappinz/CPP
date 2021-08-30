/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fminardi <fminardi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 15:31:53 by fminardi          #+#    #+#             */
/*   Updated: 2021/08/30 15:31:53 by fminardi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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