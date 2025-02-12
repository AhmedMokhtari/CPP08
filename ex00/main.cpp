#include <iostream>
#include <list>
#include "easyfind.hpp"

int main()
{
    // std::list<int> a{1,2,3,4,5,6};
    std::list<int> a;
    a.push_back(1);
    a.push_back(2);
    a.push_back(3);
    a.push_back(4);
    a.push_back(5);
    a.push_back(6);

    try{
         std::list<int>::iterator b = easyfind(a, 566);
        std::cout << *b << std::endl;
    }catch (const std::exception &e)
    {
        std::cout << e.what();
    }

    return 0;
}