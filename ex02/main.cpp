
#include <list>
#include "MutantStack.hpp"
#include <cstdlib>
#include <vector>

// int main()
// {
//     std::list<int> mstack;
//     mstack.push_back(5);
//     mstack.push_back(17);
//     // std::cout << mstack.top() << std::endl;
//     // mstack.pop();
//     std::cout << mstack.size() << std::endl;
//     mstack.push_back(3);
//     mstack.push_back(5);
//     mstack.push_back(737);
//     //[...]
//     // mstack.push_back(0);
//     // std::cout << mstack.top() << std::endl;
//     std::list<int>::iterator it = mstack.begin();
//     std::list<int>::iterator ite = mstack.end();
//     ++it;
//     --it;
//     while (it != ite)
//     {
//         std::cout << *it << std::endl;
//         ++it;
//     }
//     // std::stack<int> s(mstack);
//     return 0;
// }



int main()
{
    std::cout << "-------------- Int -------------\n";
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << mstack.top() << std::endl;
    mstack.pop();
    std::cout << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    //[...]
    mstack.push(0);
    std::cout << mstack.top() << std::endl;
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    std::cout << "-------------- string -------------\n";
    MutantStack<std::string> mystr;
    mystr.push("Alo ");
    mystr.push("test1 ");
    mystr.push("test2 ");
    mystr.push("test3 ");


    MutantStack<std::string>::iterator it1 ;

    for (it1 = mystr.begin(); it1 != mystr.end(); it1++)
        std::cout << *it1 << std::endl;
    std::stack<int> s(mstack);
    return 0;
}