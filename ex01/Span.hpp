#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <algorithm>
#include <vector>

class Span
{
    public:
    ~Span();
    Span & operator=(const Span & copy);
    Span(const Span & copy);
    Span(unsigned int N);

    // cree une exception pour apprendre
    void    addNumber(int nb);
    void    shortestSpan();
    void    longestSpan();
    void    fillSpan(int nb);

    private:
    unsigned int                _N;
    std::vector<int>            _list;
    std::vector<int>::iterator  _it;
    Span();
}   ;

#endif