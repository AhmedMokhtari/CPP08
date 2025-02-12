#pragma once
#include <algorithm>
#include <exception>

template <typename T>
typename T::iterator easyfind(T t1, int t2)
{
    typename T::iterator a = std::find(t1.begin(    ), t1.end(), t2);
    if (a != t1.end())
        return a;
    throw std::out_of_range("Element not found");
}
