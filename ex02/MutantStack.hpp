#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>

template <typename T, class container=std::deque<T> >
class MutantStack: public std::stack<T, container>
{
    public:

        MutantStack() {}
        ~MutantStack() {}
        MutantStack(MutantStack &copy) {(void)copy;}
        MutantStack &operator = (MutantStack &src) {std::stack<T, container>::operator=(src);return *this;}

        typedef typename container::iterator iterator;
        iterator begin() {return (this->c.begin());}
        iterator end() {return (this->c.end());}

    private:

};

#endif