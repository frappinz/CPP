/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fminardi <fminardi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 15:47:50 by fminardi          #+#    #+#             */
/*   Updated: 2021/09/24 15:47:51 by fminardi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

template<typename T>
class Array
{
	public:
		Array();
		Array<T>(unsigned int n);
		Array(const Array &copy);
		Array& operator=(const Array &copy);
		unsigned int size() const;
		class Exception: public std::exception
		{
		public:
			virtual const char* what() const throw() ;
		};
		T& operator[] (unsigned int i) const;
	private:
		T* _arr;
		int _size;
};

template<typename T>
Array<T>::Array()
{
	_arr = NULL;
	_size = 0;
}

template<typename T>
Array<T>::Array(unsigned int n)
{
	_arr = new T[n];
	_size = n;
}

template<typename T>
Array<T>::Array(const Array<T> &copy)
{
	_arr = NULL;
	*this = copy;
}

template<typename T>
Array<T> &Array<T>::operator=(const Array<T> &copy)
{
	delete _arr;
	_size = copy.size();
	_arr = NULL;
	if (_size)
		_arr = new T [_size];
	for (int i = 0; i < _size; i++)
		_arr[i] = copy[i];
	return *this;
}

template<typename T>
T& Array<T>::operator[] (unsigned int i) const
{
	if (i < 0 || i >= size())
		throw Exception();
	return this->_arr[i];
}

template<typename T>
const char* Array<T>::Exception::what() const throw()
{
	return "This is not allocated";
}

template<typename T>
unsigned int	Array<T>::size() const {return this->_size;}


