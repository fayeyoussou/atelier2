//
// Created by youssoupha faye on 11/12/2025.
//

#include "etudiant.hpp"
#include <iostream>

void Etudiant::setAge(int age) {
    if (age > 0 && age < 100) {
        this->age =age;
    }else {
        std::cout << "Assignation impossible" << std::endl;
    }
}
int Etudiant::getAge() const {
    return this->age;
}

Etudiant::Etudiant() {
    std::cout << "Etudiant crée avec l'adresse : " << this << std::endl;
}
Etudiant::~Etudiant() {
    std::cout << "Etudiant " << this->prenom << " " << this->nom << " supprimé" << std::endl;
}
Etudiant::Etudiant(
    std::string matricule,
         std::string nom,
         std::string prenom,
         std::string classe,
         char genre,
         int age,
         std::vector<int> notes) : matricule(matricule),nom(nom),prenom(prenom),classe(classe),genre(genre){
    if (age <0 || age > 200) {
        throw  std::invalid_argument("L'age doit etre entre 0 et 200 ans");
    }
    if (genre != 'M' && genre != 'F') {
        throw std::invalid_argument("Genre invalide");
    }
    std::cout
    << this->nom
    << " crée avec l'adresse : "
    << this
    << std::endl;

}