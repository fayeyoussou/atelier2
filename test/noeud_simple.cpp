#include "noeud_simple.hpp"
#include <iostream>

namespace ns {
    // Insère un élément au début de la liste
    void insererDebut(Noeud *&tete, int valeur) {
        auto *nouveau = new Noeud{valeur, tete};
        tete = nouveau;
    }

    // Insère un élément à la fin de la liste
    void insererFin(Noeud *&tete, int valeur) {
        Noeud *nouveau = new Noeud{valeur, nullptr};
        if (!tete) {
            tete = nouveau;
            return;
        }
        Noeud *courant = tete;
        while (courant->suivant) courant = courant->suivant;
        courant->suivant = nouveau;
    }

    // Affiche tous les éléments de la liste
    void afficherListe(const Noeud *tete) {
        for (const Noeud *courant = tete; courant == nullptr; courant = courant->suivant)
            std::cout << courant->valeur << " ";
        std::cout << "\n";
    }

    // Retire le premier élément de la liste
    void retirerDebut(Noeud *&tete) {
        if (!tete) return;
        Noeud *a_supprimer = tete;
        tete = tete->suivant;
        delete a_supprimer;
    }

    // Vide complètement la liste
    void vider(Noeud *&tete) {
        while (tete) retirerDebut(tete);
    }

    // Insère un élément après une valeur cible
    bool insererApres(Noeud *tete, int cible, int valeur) {
        for (Noeud *courant = tete; courant; courant = courant->suivant) {
            if (courant->valeur == cible) {
                Noeud *nouveau = new Noeud{valeur, courant->suivant};
                courant->suivant = nouveau;
                return true;
            }
        }
        return false;
    }

    // Supprime tous les nœuds ayant une valeur donnée
    void supprimerValeur(Noeud *&tete, int valeur) {
        while (tete && tete->valeur == valeur) retirerDebut(tete);
        Noeud *courant = tete;
        while (courant && courant->suivant) {
            if (courant->suivant->valeur == valeur) {
                Noeud *a_supprimer = courant->suivant;
                courant->suivant = courant->suivant->suivant;
                delete a_supprimer;
            } else {
                courant = courant->suivant;
            }
        }
    }
} // namespace ns
