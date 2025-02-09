#pragma once
#include <algorithm>
#include <exception>

template <typename T>
typename T::iterator easyfind(T t1, int t2)
{
    for(typename T::iterator i = t1.begin(); i != t1.end(); i++)
    {
        if (*i == t2)
            return i;
        std::cout << *i << " ";
    }
    throw std::exception();
    return t1.end();
}
