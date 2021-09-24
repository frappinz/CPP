/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fminardi <fminardi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 15:48:01 by fminardi          #+#    #+#             */
/*   Updated: 2021/09/24 15:48:02 by fminardi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

// class Awesome
// {
// 	public:
// 		Awesome(void) : _n(42) {return;}
// 		int get(void) const {return this->_n;}
// 	private:
// 		int _n;
// };

// std::ostream &operator << (std::ostream & o, Awesome const &rhs) {o<<rhs.get(); return o;}

template<typename T>
void print(T const & x) {
	std::cout << x << std::endl;
	return;
}

int main()
{
	// int tab[] = {0, 1, 2, 3, 4};
	// Awesome tab2[5];

	// iter(tab, 5, print);
	// iter(tab2, 5, print);
	// return (0);
	std::string arr1[] = {"Stringa1", "Stringa2", "Stringa3"};
	int			arr2[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

	iter(arr1, 3, print);
	iter(arr2, 10, print);

}