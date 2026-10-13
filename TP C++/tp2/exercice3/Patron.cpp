#include "Patron.h"
#include <iostream>

Patron::Patron() : Personnel(), ba(0.0), mv("") {}

Patron::Patron(std::string nom, std::string position, float salaire, float bonus, std::string marque)
    : Personnel(nom, position, salaire), ba(bonus), mv(marque) {}

void Patron::saisie_patron() {
    saisie_personnel();
    std::cout << "bonus annuel = ";
    std::cin >> ba;
    std::cout << "Marque de voiture = ";
    std::cin >> mv;
}

void Patron::affiche_patron() const {
    affiche_personnel();
    std::cout << "bonus annuel = " << ba << "\n"
              << "Marque de voiture = " << mv << "\n";
}

float Patron::calculer_revenu_annuel() {
    return (salaire * 12) + ba;
}

