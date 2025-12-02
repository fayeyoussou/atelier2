#pragma once
namespace ns {
    struct Noeud {
        int valeur;
        Noeud *suivant;
    };

    void insererDebut(Noeud *&tete, int valeur);

    void insererFin(Noeud *&tete, int valeur);

    void afficherListe(const Noeud *tete);
    void afficher(const Noeud *tete);

    void retirerDebut(Noeud *&tete);

    void vider(Noeud *&tete);

    bool insererApres(Noeud *tete, int cible, int valeur);

    void supprimerValeur(Noeud *&tete, int valeur);
}
