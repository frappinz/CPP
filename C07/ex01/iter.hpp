#pragma once
#include <iostream> 
template<class T>void iter(T* array, unsigned int length, void (*f)(const T&))
{
	(void)array;
	(void) length;
	(void) f;
	std::cout << "I worked!!" << std::endl;
}

template <typename T>T acaso(T x, T y)
