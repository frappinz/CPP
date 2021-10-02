/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fminardi <fminardi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 17:32:58 by fminardi          #+#    #+#             */
/*   Updated: 2021/10/02 11:50:15 by fminardi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <exception>
#include <algorithm>
#include <vector>
#include <string>

class	NotFoundException : public std::exception
{
	public:
		const char * what () const throw ();
};

const char *NotFoundException::what () const throw ()
{
	return ("Element not found!");
}

template<typename T>
typename T::iterator easyfind(T& y, int x)
{
	typename T::iterator found;

	found = std::find(y.begin(), y.end(), x);
	if(found == y.end())
		throw NotFoundException();
	return found;
}

#endif