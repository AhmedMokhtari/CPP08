#pragma once
#include <algorithm>
#include <exception>
#include <stack>
#include <iostream>
template <typename T>
class MutantStack: public std::stack<T>{
    public :
        MutantStack(){

        }
        MutantStack(const MutantStack &cp) : std::stack<T>(cp)
        {

        }
        ~MutantStack()
        {

        }
        MutantStack &operator=(const MutantStack &cp)
        {
            if (&cp != this)
            {
                std::stack<T>::operator=(cp);
            }
            return *this;
        }

        typedef typename std::deque<T>::iterator iterator;
        // typedef typename std::deque<T>::const_iterator const_iterator;

        typename std::deque<T>::iterator begin()
        {
            return this->c.begin();
        }

        typename std::deque<T>::iterator end()
        {
            return this->c.end();
        }

};