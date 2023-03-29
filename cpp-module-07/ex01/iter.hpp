#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

using std::cout;
using std::endl;
using std::string;

template <typename T>
void print(T &var)
{
	cout << var << " ";
};

template <typename T>
void iter(T *array_addr, size_t length, void (*func)(T const &array_addr))
{
	for (size_t i = 0; i < length; i++)
		func(array_addr[i]);
};

#endif