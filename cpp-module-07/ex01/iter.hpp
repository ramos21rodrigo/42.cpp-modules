#pragma once

#include <iostream>

using std::string;
using std::cout;
using std::endl;

template<typename T> 
void print( T &var ) {
	cout << var << endl;
};

template <typename T> 
void iter(T &array_addr, size_t length, void (*func)(T &array_addr))
{
	for (size_t i = 0; i < length; i++)
		func(array_addr[i]);
};