#pragma once

#include <iostream>
#include <algorithm>

using std::cout;
using std::endl;

template <typename T>
int easyfind(T const &container, int el)
{
	typename T::const_iterator index = std::find(container.begin(), container.end(), el);
    return (index != container.end() ? *index : -1);
}