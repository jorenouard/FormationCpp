#include <iostream>

int main()
{
    // Valeur variable
    int trois = 3;
    // Différentes syntaxes pour la création des tableaux statiques
    int t[4] = {1, 2, trois, 4}; // Création d'un tableau d'entier de 4 éléments initialisés.
    trois = 0; // trois = 0
    int* pInt1 = t; // Création d'un pointeur sur entiers auquel on affecte t
    int* pInt2 = &t[0]; // Création d'un pointeur sur entiers auquel on affecte l'adresse du premier élément du tableau t (pInt1 == pInt2)

    int a = *(pInt1+2); // a == 3
    int b = *(t+2); // b == 3
    int c = pInt1[2]; // c == 3
    int d = pInt2[2]; // c == 3

    std::cout << "a : " << a << std::endl;
    std::cout << "b : " << b << std::endl;
    std::cout << "c : " << c << std::endl;
    std::cout << "d : " << d << std::endl;
    std::cout << "pInt1 : " << *pInt1 << std::endl;
    std::cout << "pInt2 : " << *pInt2 << std::endl;

    return 0;
}

