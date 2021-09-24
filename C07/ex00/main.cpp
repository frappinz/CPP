/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fminardi <fminardi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 14:59:08 by fminardi          #+#    #+#             */
/*   Updated: 2021/09/23 10:18:53 by fminardi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"
#include <iostream>


// class Awesome
// {
// 	public:
// 		Awesome (int n) : _n(n){}
// 		bool operator ==(Awesome const &rhs) const {return (this->_n==rhs._n);}
// 		bool operator !=(Awesome const &rhs) const {return (this->_n!=rhs._n);}
// 		bool operator >(Awesome const &rhs) const {return (this->_n>rhs._n);}
// 		bool operator <(Awesome const &rhs) const {return (this->_n<rhs._n);}
// 		bool operator >=(Awesome const &rhs) const {return (this->_n>=rhs._n);}
// 		bool operator <=(Awesome const &rhs) const {return (this->_n==rhs._n);}
// 	private:
// 		int _n;
// };


int main() 
{
	int a = 2;
	int b = 3;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	return 0;
}