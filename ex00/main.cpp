#include "easyfind.hpp"

int main()
{
    std::vector<int> vec = {1, 2, 3, 4};
    std::vector<int>::iterator it;
    it = easyfind(vec, 2);
    std::cout << "voici it " << it << std::endl;
    return 0;
}

// T doit etre un container qui contiens des int, cette fonction doit trouver
// la premiere occurence du second parametre dans le premier

// si aucune occurrence n'est trouver, tu peux throw une exeption ou retourner une erreur
// de ton choix

// si tu as besoin d'inspiration, analyse comment les containers standars fonctionnes