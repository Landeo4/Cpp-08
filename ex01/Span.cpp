#include "Span.hpp"

Span::Span() : _N(0), _list(_N)
{

}

Span::~Span()
{

}

Span &Span::operator=(const Span & copy)
{
    if (&copy != this)
    {
        *this = copy;
    }
    return *this;
}

Span::Span(const Span & copy)
{
    *this = copy;
}

Span::Span(unsigned int N) : _N(N), _list(_N)
{

}

void Span::addNumber(int nb)
{
    if (_list.empty())
        _list.push_back(nb);

    for (_it = _list.begin(); *_it  ; _it++)

    if (_it == _list.end())
        return ;
    _list.push_back(nb);
    int i = _list.back();
    std::cout << "voici le dernier element ajouter " << i << std::endl;
}

// add a single number to the SPan, il sera utiliser pour remplir
//cette derniere, si un l'on essaye d'ajouter un element alors que
// N est deja atteint renverra une exeption

void Span::shortestSpan()
{
    // if (_list.size() < 2)
        // throw exception
    std::vector<int>::iterator i1 = _list.begin();
    std::vector<int>::iterator i2 = _list.begin();

    std::cout << "the smallest element is " << *std::min_element(i1, i2) << std::endl;
}

void Span::longestSpan()
{
    std::vector<int>::iterator i1 = _list.begin();
    std::vector<int>::iterator i2 = _list.begin();

    std::cout << "the largest element is " << *std::max_element(i1, i2) << std::endl;
}

// trouver le plus grand (ou petit) distance entre tous les nombres et le renvoyer
// s'il y a aucun Span ou qu'un seul, renvoyer une exception

void Span::fillSpan(int nb)
{
    (void)nb;
    // std::for_each(_cont[0], _cont[_N], nb++);
}

// method pour mettre