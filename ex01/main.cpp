
#include <list>
#include "Span.hpp"
#include <cstdlib>

int gen()
{
    static int i = 0;
    i++;
    srand(time(NULL));
    return (rand() / i) % 21474800;
}
int main()
{
    std::vector<int> t(21474500);
    std::generate(t.begin(), t.end(), gen);
    for (size_t i = 0; i < 6 ; i++)
        std::cout << t[i] << " ";
    std::cout << std::endl;
    Span sp = Span(2147450);
    sp.addNumber(t.begin(), t.end());
    // sp.addNumber(3);
    // sp.addNumber(17);
    // sp.addNumber(9);
    // sp.addNumber(11);
    // sp.addNumber(12);
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
    return 0;
}
