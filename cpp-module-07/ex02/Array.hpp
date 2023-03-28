#pragma once

#include <iostream>

using std::cout;
using std::endl;

template<typename T> 
class Array
{
	private:
		T *_array;

	public:
		Array<T>() : _array() {
			cout << "Default constructor called" << endl;
		}

		Array<T>(unsinged int n): _array(new T[n]) {
			cout << "Field constructor called" << endl;
		}

		~Array<T>() {
		if (this->_array)
			delete [] _array;
		cout << "Destructor is called" << endl;

		T & operator[](unsigned int i) const {
		if (i > this->size())
			throw (outOfLimits());
		return this->_array[i];
	}
	}
};