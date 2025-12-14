//
// Created by youssoupha faye on 02/12/2025.
//

#include <iostream>
#include <vector>

int main() {
    int n;
    std::cout << "Combien de notes ? ";
    std::cin >> n;

    // Tableau dynamique de taille n, géré automatiquement
    std::vector<int> notes(n);

    // --- SAISIE DES NOTES ---
    for (int i = 0; i < n; ++i) {
        std::cout << "Note " << i << " : ";
        std::cin >> notes[i]; // accès comme un tableau classique
    }

    std::cout << "\n--- Affichage 1 : parcours avec indices ---\n";
    for (int i = 0; i < notes.size(); ++i) {
        std::cout << "notes[" << i << "] = " << notes[i] << "\n";
    }
    std::cout << "\n--- Affichage 2 : boucle for (range-based) ---\n";
    for (int valeur : notes) {           // copie de chaque élément
        std::cout << valeur << " ";
    }
    std::cout << "\n";

    std::cout << "\n--- Affichage 3 : avec iterateurs ---\n";
    for (auto i = notes.begin() ; i != notes.end(); ++i) {
        std::cout << *i << " ";
    }
    std::cout << "\n";

    // --- ACCES AUX ELEMENTS ---
    if (!notes.empty()) {
        std::cout << "\nPremier élément (front) : " << notes.front() << "\n";
        std::cout << "Dernier élément   (back)  : " << notes.back() << "\n";

        // Accès "non sécurisé" (comme en C) :
        std::cout << "notes[0] = " << notes[0] << "\n";

        // Accès sécurisé : at() vérifie les bornes
        std::cout << "notes.at(0) = " << notes.at(0) << "\n";

        // Exemple d'accès sécurisé qui pourrait déclencher une exception :
        // if (notes.size() > 100) notes.at(100); // ici, on ne le fait pas.
    }

    // --- AJOUT D'ELEMENTS ---
    std::cout << "\n--- Ajout d'une note à la fin (push_back) ---\n";
    std::cout << "Ajout de la note 20.\n";
    notes.push_back(20);
    notes[3]=20;
    std::cout << "Nouveau contenu : ";
    for (int v : notes) {
        std::cout << v << " ";
    }
    std::cout << "\nTaille (size) = " << notes.size() << "\n";

    // Insertion au début
    std::cout << "\n--- Insertion d'une note au début (insert) ---\n";
    std::cout << "Insertion de la note 0 au début.\n";
    notes.insert(notes.begin(), 0); // insère 0 à l'indice 0

    std::cout << "Nouveau contenu : ";
    for (int v : notes) {
        std::cout << v << " ";
    }
    std::cout << "\nTaille (size) = " << notes.size() << "\n";

    // Insertion au milieu (si taille suffisante)
    if (notes.size() >= 2) {
        std::cout << "\n--- Insertion au milieu ---\n";
        std::cout << "Insertion de 15 à la position 2.\n";
        notes.insert(notes.begin() + 2, 15); // à l'indice 2

        std::cout << "Nouveau contenu : ";
        for (int v : notes) {
            std::cout << v << " ";
        }
        std::cout << "\n";
    }

    // --- SUPPRESSION D'ELEMENTS ---
    // Suppression du dernier élément
    if (!notes.empty()) {
        std::cout << "\n--- Suppression du dernier élément (pop_back) ---\n";
        notes.pop_back();

        std::cout << "Après pop_back : ";
        for (int v : notes) {
            std::cout << v << " ";
        }
        std::cout << "\n";
    }

    // Suppression d'un élément à une position donnée
    if (notes.size() >= 3) {
        std::cout << "\n--- Suppression de l'élément à l'indice 1 (erase) ---\n";
        notes.erase(notes.begin() + 1); // supprime l'élément à l'indice 1

        std::cout << "Après erase(notes.begin() + 1) : ";
        for (int v : notes) {
            std::cout << v << " ";
        }
        std::cout << "\n";
    }

    // Suppression d'un intervalle (ici : on enlève tout sauf le premier)
    if (notes.size() > 1) {
        std::cout << "\n--- Suppression d'un intervalle ---\n";
        std::cout << "On garde seulement le premier élément.\n";
        notes.erase(notes.begin() + 1, notes.end()); // [begin+1, end[

        std::cout << "Après erase(begin+1, end) : ";
        for (int v : notes) {
            std::cout << v << " ";
        }
        std::cout << "\n";
    }

    // --- REDIMENSIONNEMENT ---
    std::cout << "\n--- Redimensionnement (resize) ---\n";
    std::cout << "On met la taille à 5.\n";
    notes.resize(5, -1);
    // Si la taille augmente, les nouvelles cases sont remplies avec -1

    std::cout << "Après resize(5, -1) : ";
    for (int v : notes) {
        std::cout << v << " ";
    }
    std::cout << "\nTaille (size) = " << notes.size() << "\n";

    // --- VIDER LE VECTOR ---
    std::cout << "\n--- Vider complètement le vector (clear) ---\n";
    notes.clear();

    std::cout << "Après clear(), size = " << notes.size()
              << ", empty() = " << std::boolalpha << notes.empty() << "\n";

    return 0;
}
