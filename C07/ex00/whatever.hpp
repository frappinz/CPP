/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fminardi <fminardi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 14:59:06 by fminardi          #+#    #+#             */
/*   Updated: 2021/09/23 10:55:03 by fminardi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

template<typename T>void swap(T& x,T& y)
{
    T temp;
    temp=x;
    x=y;
    y=temp;
}

template <typename T> const T& min (const T& a, const T& b) {
  return !(b<a)?a:b;
}
template <typename T> const T& max (const T& a, const T& b) {
  return !(b>a)?a:b;
}
#endif