#include "ListePersonnel.h"
#include "Patron.h"

#include <iostream>


ListePersonnel::ListePersonnel() = default;

ListePersonnel::~ListePersonnel() {
    for (Personnel* personne : liste) {
        delete personne;
    }
}

void ListePersonnel::remplir_liste_personnel() {
    char continuer = 'O';
    while (continuer == 'O' || continuer == 'o') {
        char type;
        std::cout << "Type a saisir (P=Personnel, D=Patron) : ";
        if (!(std::cin >> type)) {
            return;
        }
        Personnel* personne = nullptr;
        if (type == 'P' || type == 'p') {
            personne = new Personnel();
        } else if (type == 'D' || type == 'd') {
            personne = new Patron();
        } else {
            std::cout << "Type invalide. Choisissez P ou D." << std::endl;
            continue;
        }

        personne->saisie_personnel();
        liste.push_back(personne);

        std::cout << "Voulez-vous continuer (O/N) ? ";
        if (!(std::cin >> continuer)) {
            return;
        }
    }
}

void ListePersonnel::afficher_liste_personnel() const {
    for (const Personnel* personne : liste) {
        personne->affiche_personnel();
        std::cout << std::endl;
    }
}
