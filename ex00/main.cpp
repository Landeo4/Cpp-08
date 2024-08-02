#include "easyfind.hpp"

int main()
{
    int sa[] = {1, 2, 3, 4};
    std::vector<int> vec(sa, sa + 4);
    std::vector<int>::iterator it;
    try
    {
        it = easyfind<std::vector<int> >(vec, 8);
    }
    catch(const std::exception & e)
    {
        std::cout << e.what() << std::endl;
        return 1;
    }
    std::cout << "voici mon resultat " << *it << std::endl;
    return 0;
}

template <typename T>
typename T::iterator easyfind(T & typ, int i)
{
	typename T::iterator it;
    it = std::find(typ.begin(), typ.end(), i);
    if (it == typ.end())
    {
        throw std::out_of_range("Value not found in container");
    }
    return it;
}

// T doit etre un container qui contiens des int, cette fonction doit trouver
// la premiere occurence du second parametre dans le premier

// si aucune occurrence n'est trouver, tu peux throw une exeption ou retourner une erreur
// de ton choix

// si tu as besoin d'inspiration, analyse comment les containers standars fonctionnes