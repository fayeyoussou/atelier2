//
// Created by youssoupha faye on 02/12/2025.
//

#include <iostream>
#include <memory> // pour std::unique_ptr et std::make_unique

int main() {
    // Création d'un unique_ptr qui possède un int initialisé à 5
    std::unique_ptr<int> p = std::make_unique<int>(5);

    std::cout << "Valeur pointee : " << *p << "\n"; // opérateur *

    // Pas de delete à écrire :
    // - à la fin de main, p est détruit
    // - il appelle automatiquement delete sur l'int qu'il possède

    return 0;
}
