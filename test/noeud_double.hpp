#pragma once

namespace nd {

struct NoeudDouble {
    int valeur;
    NoeudDouble* suivant;
    NoeudDouble* precedent;
};

void insererDebut(NoeudDouble*& tete, NoeudDouble*& queue, int valeur);
void insererFin(NoeudDouble*& tete, NoeudDouble*& queue, int valeur);
bool insererApres(NoeudDouble*& queue, NoeudDouble* position, int valeur);
bool insererAvant(NoeudDouble*& tete, NoeudDouble* position, int valeur);
NoeudDouble* insererApres(NoeudDouble* position, int valeur);
NoeudDouble* insererAvant(NoeudDouble* position, int valeur);
void afficherListe(const NoeudDouble* tete);
void afficherInverse(const NoeudDouble* queue);
void retirerDebut(NoeudDouble*& tete, NoeudDouble*& queue);
void vider(NoeudDouble*& tete, NoeudDouble*& queue);

} // namespace nd
