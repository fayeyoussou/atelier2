//
// Created by youssoupha faye on 02/12/2025.
//

#include <iostream>

/**
* Oublier delete → fuite mémoire (memory leak).
* Faire delete deux fois → comportement indéfini.
* Utiliser p après delete p → bug très difficile à trouver.
* Mélanger new[] / delete[] avec new / delete.
 *
 */
// int main() {
//     int *p = new int(5);
//     // ...
//     delete p;
//     p = nullptr;
// }


int main() {
    int n;
    std::cout << "Combien de notes ? ";
    std::cin >> n;

    int* notes = new int[n]; // allocation dynamique

    for (int i = 0; i < n; ++i) {
        std::cout << "Note " << i << " : ";
        std::cin >> notes[i];
    }

    std::cout << "Les notes sont : ";
    for (int i = 0; i < n; ++i) {
        std::cout << notes[i] << " ";
    }
    std::cout << "\n";

    delete[] notes; // ⚠️ A ne pas oublier !
    notes = nullptr;

    return 0;
}

