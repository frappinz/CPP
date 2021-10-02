/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fminardi <fminardi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 12:56:06 by fminardi          #+#    #+#             */
/*   Updated: 2021/10/02 12:56:07 by fminardi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <algorithm>
#include <stack>
#include <deque>


template <class T>
class MutantStack : public std::stack<T>
{
	public:
		MutantStack() : std::stack<T>() {};
		MutantStack(const MutantStack& mstack): std::stack<T>(mstack) {};
		MutantStack<T>& operator= (const MutantStack<T>& mstack) {
			std::stack<T>::operator=(mstack);
			return *this;
		}
		virtual ~MutantStack(){};
		typedef typename std::stack<T>::container_type::iterator iterator;
		iterator begin(){ return (std::stack<T>::c.begin());}
		iterator end() {return (std::stack<T>::c.end());}
};
