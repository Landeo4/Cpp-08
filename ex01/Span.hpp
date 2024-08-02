#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <algorithm>
#include <vector>

class Span
{
    public:
    Span();
    ~Span();
    Span & operator=(const Span & copy);
    Span(const Span & copy);

    void addNumber();
    int shortestSpan();
    int longestSpan();
    void fillSpan();
    private:
    unsigned int _N;
}

#endif