#include <iostream>

#include "etudiant.hpp"

struct Personne {
    std::string nom;
    int age;
};
void afficherListeEtudiants(const std::vector<Etudiant>& etudiants) {
    for (const Etudiant& etudiant : etudiants) {
        std::cout
        << "Nom : " << etudiant.getNom()
        << " Age : " << etudiant.getAge();
    }
}
std::vector<Etudiant> saisirEtudiants() {
    std::vector<Etudiant> etudiants;
    char choix;

    do {
        std::cout << "\nAjouter un étudiant ? (o/n) : ";
        std::cin >> choix;

        if (choix == 'n' || choix == 'N') {
            break;
        }

        std::string matricule, nom, prenom, classe;
        char genre;
        int age;
        int nbNotes;
        std::vector<int> notes;

        std::cout << "Matricule : ";
        std::cin >> matricule;

        std::cout << "Nom : ";
        std::cin >> nom;

        std::cout << "Prenom : ";
        std::cin >> prenom;

        std::cout << "Classe : ";
        std::cin >> classe;

        std::cout << "Genre (M/F) : ";
        std::cin >> genre;

        std::cout << "Age : ";
        std::cin >> age;

        std::cout << "Nombre de notes : ";
        std::cin >> nbNotes;

        for (int i = 0; i < nbNotes; ++i) {
            int note;
            std::cout << "Note " << i + 1 << " : ";
            std::cin >> note;
            notes.push_back(note);
        }

        etudiants.push_back(
            Etudiant(matricule, nom, prenom, classe, genre, age, notes)
        );

        std::cout << "Etudiant ajoute ✔\n";

    } while (true);

    return etudiants;
}
int main() {
    std::vector<Etudiant> etudiants = {
        Etudiant("MAT001", "Faye", "Moussa", "L2 GL", 'M', 22, {14, 15, 16}),
        Etudiant("MAT002", "Diop", "Awa", "L2 GL", 'F', 21, {13, 14, 15}),
        Etudiant("MAT003", "Ndiaye", "Mamadou", "L2 GL", 'M', 23, {12, 11, 14}),
        Etudiant("MAT004", "Sarr", "Fatou", "L2 GL", 'F', 20, {16, 17, 18}),
        Etudiant("MAT005", "Ba", "Ibrahima", "L2 GL", 'M', 24, {10, 12, 13})
    };

    afficherListeEtudiants(etudiants);
    std::vector<Etudiant> newListeEtudiants = saisirEtudiants();
    afficherListeEtudiants(newListeEtudiants);
    return 0;
    // Etudiant etudiant {};
    // etudiant.setAge(18);
    // etudiant.setNom("Abdou");
    // std::vector<Etudiant> etudiants = {Etudiant{"A01",""}};
    // int a = 7;
    // int *p = &a;
    //
    // std::vector<Personne> personnes ={};
    // for (auto personnes= personnes.begin();personnes != personnes.end();personnes++) {
    //     Personne personne ={};
    //     std::cout << "nom : " << std::endl;
    //     std::cin >> personne.nom;
    //     std::cout << "age : " << std::endl;
    // }
}