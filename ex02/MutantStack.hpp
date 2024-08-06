#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>

template <typename T>
class MutantStack
{
    public:
    MutantStack();
    ~MutantStack();
    MutantStack(const MutantStack & copy);
    MutantStack&operator=(const MutantStack & copy);

    Begin();
    end();
    private:

}   ;

#endif