#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <cstddef>

using std::cout;
using std::endl;

template <typename T>
class Array
{
private:
	T *_array;
	unsigned int _n;

public:
	Array<T>() : _array(), _n(0)
	{
		cout << "Default constructor called" << endl;
	}

	Array<T>(unsigned int n) : _array(new T[n]), _n(n)
	{
		cout << "Field constructor called" << endl;
	}

	~Array<T>()
	{
		if (this->_array)
			delete[] _array;
		cout << "Destructor is called" << endl;
	}

	Array<T>(const Array<T> &other) : _array(new T[other.size()]), _n(other.size())
	{
		for (unsigned int i = 0; i < other.size(); i++)
			_array[i] = other[i];
		cout << "Copy constructor called" << endl;
	}

	T &operator[](unsigned int i) const
	{
		if (i >= this->size())
			throw OutOfBounds();
		return this->_array[i];
	}

	T &operator=(const Array<T> &assign)
	{
		if (_n > 0)
			delete[] _array;
		_array = NULL;

		_array = new T[assign.size()];
		for (unsigned int i = 0; i < assign.size(); i++)
			_array[i] = assign[i];
		return *this;
	}

	unsigned int size() const
	{
		return _n;
	}

	class OutOfBounds : public std::exception
	{
	public:
		virtual const char *what() const throw()
		{
			return "Out of bounds!";
		}
	};
};

#endif