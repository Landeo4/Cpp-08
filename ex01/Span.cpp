#include "Span.hpp"

Span::Span() : _N(0)
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

Span::Span(unsigned int N) : _N(N)
{

}

bool Span::addNumber(int nb)
{
    if (!_list.empty())
    {
        if (_list.size() > _N)
            throw Exception();

        for (_it = _list.begin(); *_it  ; _it++)

        if (_it == _list.end())
            return false;
    }
    _list.push_back(nb);
    int i = _list.back();
    std::cout << "voici le dernier element ajouter " << i << std::endl;
    return true;
}

// add a single number to the SPan, il sera utiliser pour remplir
//cette derniere, si un l'on essaye d'ajouter un element alors que
// N est deja atteint renverra une exeption

int Span::shortestSpan()
{
    // if (_list.size() < 2)
        // throw exception
    std::vector<int>::iterator i1 = _list.begin();
    std::vector<int>::iterator i2 = _list.begin();

    return *std::min_element(i1, i2+5);
}

int Span::longestSpan()
{
    for (std::vector<int>::iterator it = _list.begin(); it < _list.end(); it++)
        std::cout << *it << std::endl;
    std::vector<int>::iterator it = _list.begin();
    std::vector<int>::iterator last = _list.end();
    int min = *std::min_element(_list.begin(), _list.end());
    int max = *std::max_element(it, last);

    int larg = max - min;
    return larg;
}

// trouver le plus grand (ou petit) distance entre tous les nombres et le renvoyer
// s'il y a aucun Span ou qu'un seul, renvoyer une exception

void Span::fillSpan(int nb)
{
    (void)nb;
    // std::for_each(_cont[0], _cont[_N], nb++);
}

// method pour mettre