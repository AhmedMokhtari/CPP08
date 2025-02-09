#pragma once
#include <algorithm>
#include <exception>
#include <list>
#include <vector>
#include <iostream>
// #include <bits/stdc++.h>

class Span{
    private :
        std::vector<int> arr;
        unsigned int size;
        unsigned int cur;
    public :
        Span();
        Span(unsigned int N);
        ~Span();
        Span(const Span &cp);
        Span & operator = (const Span &cp);
        void addNumber(int num);
        int shortestSpan();
        int longestSpan();
};
