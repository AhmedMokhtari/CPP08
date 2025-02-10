#pragma once
#include <algorithm>
#include <exception>
#include <list>
#include <vector>
#include <iostream>
#include <numeric> 

// #include <bits/stdc++.h>

class Span{
    private :
        std::vector<int> arr;
        unsigned int size;
    public :
        Span();
        Span(unsigned int N);
        ~Span();
        Span(const Span &cp);
        Span & operator = (const Span &cp);
        void addNumber(int num);
        void addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end);
        int shortestSpan();
        int longestSpan();
};
