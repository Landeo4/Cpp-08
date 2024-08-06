#include "MutantStack.hpp"

template <typename T>
MutantStack::MutantStack()
{

}

MutantStack::~MutantStack()
{

}

MutantStack::&overload=(const MutantStack & copy)
{
    if (this != &copy)
        *this = copy;
    return (this);
}

MutantStack::MutantStack(const MutantStack & copy)
{
    *this = copy;
}

MutantStack::begin()
{

}

// return an iterator pointing to the first element in the vector
// return a random accesor iterator
// if the container is empty the returned value hall not be dereferenced

MutantStack::end()
{

}
