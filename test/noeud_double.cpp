#include "noeud_double.hpp"
#include <iostream>

namespace nd {
    void insererDebut(NoeudDouble *&tete, NoeudDouble *&queue, int valeur) {
        NoeudDouble *nouveau = new NoeudDouble{valeur, tete, nullptr};
        if (tete) {
            tete->precedent = nouveau;
        } else {
            queue = nouveau;
        }
        tete = nouveau;
    }

    void insererFin(NoeudDouble *&tete, NoeudDouble *&queue, int valeur) {
        NoeudDouble *nouveau = new NoeudDouble{valeur, nullptr, queue};
        if (!queue) {
            tete = queue = nouveau;
            return;
        }

        queue->suivant = nouveau;
        nouveau->precedent = queue;
        queue = nouveau;
    }

    NoeudDouble *insererApres(NoeudDouble *position, int valeur) {
        if (!position) return nullptr;
        NoeudDouble *nouveau = new NoeudDouble{valeur, position->suivant, position};
        if (position->suivant) {
            position->suivant->precedent = nouveau;
        }
        position->suivant = nouveau;
        return nouveau;
    }

    NoeudDouble *insererAvant(NoeudDouble *position, int valeur) {
        if (!position) return nullptr;
        NoeudDouble *nouveau = new NoeudDouble{valeur, position, position->precedent};
        if (position->precedent) {
            position->precedent->suivant = nouveau;
        }
        position->precedent = nouveau;
        return nouveau;
    }

    bool insererApres(NoeudDouble *&queue, NoeudDouble *position, int valeur) {
        NoeudDouble *nouveau = insererApres(position, valeur);
        if (!nouveau) return false;
        if (!nouveau->suivant) queue = nouveau;
        return true;
    }

    bool insererAvant(NoeudDouble *&tete, NoeudDouble *position, int valeur) {
        NoeudDouble *nouveau = insererAvant(position, valeur);
        if (!nouveau) return false;
        if (!nouveau->precedent) tete = nouveau;
        return true;
    }

    void afficherListe(const NoeudDouble *tete) {
        for (const NoeudDouble *courant = tete; courant; courant = courant->suivant) {
            std::cout << courant->valeur << " ";
        }
        std::cout << "\n";
    }

    void afficherInverse(const NoeudDouble *queue) {
        for (const NoeudDouble *courant = queue; courant; courant = courant->precedent)
            std::cout << courant->valeur << " ";
        std::cout << "\n";
    }

    void retirerDebut(NoeudDouble *&tete, NoeudDouble *&queue) {
        if (!tete) return;
        NoeudDouble *a_supprimer = tete;
        tete = tete->suivant;
        if (tete) {
            tete->precedent = nullptr;
        } else {
            queue = nullptr;
        }
        delete a_supprimer;
    }

    void vider(NoeudDouble *&tete, NoeudDouble *&queue) {
        while (tete) retirerDebut(tete, queue);
    }
} // namespace nd
