/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fminardi <fminardi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 15:47:58 by fminardi          #+#    #+#             */
/*   Updated: 2021/09/24 15:47:59 by fminardi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream> 

template<typename T>
void iter(T* array, int length, void (*f)(const T&))
{
	for (int i = 0; i < length; i++)
		f(array[i]);
}

#endif