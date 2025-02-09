#include "Span.hpp"

Span::Span(){
    size = 0;
    cur = 0;
}

Span::Span(unsigned int N){
    size = N;
    cur = 0;
}

Span::~Span(){

}

Span::Span(const Span &cp){
    arr = cp.arr;
    size = cp.size;
    cur = cp.cur;
}

Span & Span::operator = (const Span &cp){
    if (this != &cp)
    {
        arr = cp.arr;
        size = cp.size;
        cur = cp.cur;
    }
    return *this;
}

void Span::addNumber(int num){
    if (cur < size)
    {
        arr.push_back(num);
        cur++;
        return ;
    }
    throw std::exception();
}

int Span::shortestSpan(){
    if (cur < 2)
        throw std::exception();
    std::vector<int > t = arr;
    std::sort(t.begin(), t.end());
    // for (size_t i = 0 ; i < t.size(); i++)
    // {
    //     std::cout << t[i] << std::endl;
    // }

    // int end = *t.end();
    // std::cout << "end is " << end << std::endl;
    int min = t[1] - t[0];

    for (size_t i = 1; i < t.size(); i++)
    {
        int m = t[i] - t[i - 1];
        if (m < min)
            min = m;
    }
    // for(std::vector<int>::iterator a = t.begin() ; a != t.end() ; a++)
    // {
        
    // }

    return min;
}

int Span::longestSpan(){
    // std::pair<int, int> t = minmax_element(arr.begin(), arr.end());
    // return t.second- t.first; 
    if (cur < 2)
        throw std::exception();
    int min = *min_element(arr.begin(), arr.end());
    int max = *max_element(arr.begin(), arr.end());
    // for (size_t i = 0 ; i < arr.size(); i++)
    // {
    //     std::cout << arr[i] << std::endl;
    // }
    return max - min;
}
