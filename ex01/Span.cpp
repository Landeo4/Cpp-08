#include "Span.hpp"

Span::Span() : _N(0)
{

}

~Span::Span()
{

}

Span &Span::operator=(const Span & copy)
{
    if (&copy != this)
    {
        this = copy;
    }
    return *this;
}

Span::Span(const Span & copy)
{
    *this = copy;
}

Span::Span(unsigned int N) : _N(N)
{

}

void Span::addNumber()
{
    if (_N < this->)
}
// add a single number to the SPan, il sera utiliser pour remplir
//cette derniere, si un l'on essaye d'ajouter un element alors que
// N est deja atteint renverra une exeption

int shortestSpan()
{

}

int longuestSpan()
{

}
// trouver le plus grand (ou petit) distance entre tous les nombres et le renvoyer
// s'il y a aucun Span ou qu'un seul, renvoyer une exception

void fillSpan()
{
    std::for_each()
}
