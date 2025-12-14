//
// Created by youssoupha faye on 11/12/2025.
//
#include <iostream>
#pragma once
class Etudiant {
private:
    std::string matricule;
    std::string nom;
    std::string prenom;
    std::string classe;
    char genre;
    int age;
    std::vector<int> notes;

public:
    ~Etudiant();

    void setAge(int age);

    int getAge() const;
    void setNom(std::string);
    std::string getNom() const;

    Etudiant();

    Etudiant(std::string matricule,
             std::string nom,
             std::string prenom,
             std::string classe,
             char genre = 'M',
             int age = 18,
             std::vector<int> notes = {});
};


// void triABulle(int tableau[], int taille) {
//     for (int i = 0; i < taille - 1; i++) {
//         bool echange = false;
//         for (int j = 0; j < taille - i - 1; j++) {
//
//             if (tableau[j] > tableau[j + 1]) {
//                 int temp = tableau[j];
//                 tableau[j] = tableau[j + 1];
//                 tableau[j + 1] = temp;
//                 echange = true;
//             }
//         }
//         if (!echange)
//             break;
//     }
// }
