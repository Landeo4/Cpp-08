#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <algorithm>
#include <vector>
#include <exception>

class Span
{
    public:
    ~Span();
    Span & operator=(const Span & copy);
    Span(const Span & copy);
    Span(unsigned int N);

    // cree une exception pour apprendre
    bool    addNumber(int nb);
    int    shortestSpan();
    int    longestSpan();
    void    fillSpan(int nb);

    class Exception : public std::exception
    {
        public:
        const char * what() const throw()
        {
            return ("a problem happend");
        }
    };

    private:
    unsigned int                _N;
    std::vector<int>            _list;
    std::vector<int>::iterator  _it;
    Span();
}   ;

#endif