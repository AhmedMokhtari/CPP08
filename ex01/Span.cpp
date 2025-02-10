#include "Span.hpp"

Span::Span(){
    size = 0;
}

Span::Span(unsigned int N){
    size = N;
}

Span::~Span(){

}

Span::Span(const Span &cp){
    arr = cp.arr;
    size = cp.size;
}

Span & Span::operator = (const Span &cp){
    if (this != &cp)
    {
        arr = cp.arr;
        size = cp.size;
    }
    return *this;
}

void Span::addNumber(int num){
    if (arr.size() < size)
    {
        arr.push_back(num);
        return ;
    }
    throw std::exception();
}

void Span::addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end){
    size_t num = std::distance(begin, end);
    if (arr.size() + num > size)
        throw std::exception();
    arr.insert(arr.end(), begin, end);
}


int Span::shortestSpan(){
    if (arr.size() < 2)
        throw std::exception();
    std::vector<int > t = arr;
    std::sort(t.begin(), t.end());
    std::vector<int> tmp(t.size());
    std::adjacent_difference(t.begin(), t.end(), tmp.begin());
    int min = *min_element(tmp.begin() + 1, tmp.end());
    return min;
}

int Span::longestSpan(){
    if (arr.size() < 2)
        throw std::exception();
    int min = *min_element(arr.begin(), arr.end());
    int max = *max_element(arr.begin(), arr.end());
    return max - min;
}
