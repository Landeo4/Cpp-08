#include "Span.hpp"

int main()
{
    Span sp = Span(8);

    try
    {
        sp.fillSpan();
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }
    catch(std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
}

// int main()
// {
//     Span sp = Span(2);
//     try
//     {
//         sp.addNumber(6);
//         sp.addNumber(3);
//         sp.addNumber(17);
//         sp.addNumber(9);
//         sp.addNumber(11);
//         std::cout << sp.shortestSpan() << std::endl;
//         std::cout << sp.longestSpan() << std::endl;
//     }
//     catch(std::exception & e)
//     {
//         std::cout << e.what() << std::endl;
//     }
//     return 0;
// }

// int main()
// {
//     Span sp = Span(-3);

//     try
//     {
//         sp.addNumber(6);
//         sp.addNumber(3);
//         sp.addNumber(17);
//         sp.addNumber(9);
//         sp.addNumber(11);
//         std::cout << sp.shortestSpan() << std::endl;
//         std::cout << sp.longestSpan() << std::endl;
//     }
//     catch(std::exception & e)
//     {
//         std::cout << e.what() << std::endl;
//     }
//     return 0;
// }

// penser Container

// pour calculer le plus petit span, je vais prendre chaque nombre de mon tableau
// puis je vais les comparers a tous les autres qui suivent, a chaque fois que le span
// est plus ou moins petit (suivant le cas) que le precedent, je le sauvegarde