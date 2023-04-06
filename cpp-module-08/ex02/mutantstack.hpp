#pragma once

#include <algorithm>
#include <iostream>
#include <stack>
#include <vector>
#include <iterator>
#include <list>

using std::cout;
using std::endl;

template <typename T>
class MutantStack : public std::stack<T>
{
	public:
		typedef	T*	iterator;

		iterator begin()
		{
			std::vector<T> temp;
			T top;
			iterator ret;
			size_t n = 0;

			while (!this->empty())
			{
				top = this->top();
				temp.push_back(top);
				this->pop();
				n += 1;
			}

			this->push(temp[n - 1]);
			n -= 1;

			ret = &(this->top());
			while (n--)
				this->push(temp[n]);
			return ret;
		}

		iterator end() { return (&this->top() + 1); }
};