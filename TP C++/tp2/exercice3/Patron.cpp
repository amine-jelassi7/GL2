#include "Patron.h"
#include <iostream>

Patron::Patron() : Personnel(), ba(0.0), mv("") {}

Patron::Patron(std::string nom, std::string position, float salaire, float bonus, std::string marque)
    : Personnel(nom, position, salaire), ba(bonus), mv(marque) {}

void Patron::saisie_patron() {
    Personnel::saisie_personnel();
    std::cout << "bonus annuel = ";
    std::cin >> ba;
    std::cout << "Marque de voiture = ";
    std::cin >> mv;
}

void Patron::saisie_personnel() {
    saisie_patron();
}

void Patron::affiche_patron() const {
    Personnel::affiche_personnel();
    std::cout << "bonus annuel = " << ba << "\n"
              << "Marque de voiture = " << mv << "\n";
}

void Patron::affiche_personnel() const {
    affiche_patron();
}

float Patron::calculer_revenu_annuel() const {
    return (salaire * 12) + ba;
}

