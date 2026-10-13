#include "Personnel.h"
#include <iostream>


Personnel::Personnel() : nom(""), position(""), salaire(0.0) {}

Personnel::Personnel(std::string nom, std::string position, float salaire)
    : nom(nom), position(position), salaire(salaire) {}

void Personnel::affiche_personnel() const {
    std::cout << "Nom : " << nom << "\n"
              << "Position : " << position << "\n"
              << "Salaire : " << salaire << "\n";
}

void Personnel::saisie_personnel() {
    std::cout << "Nom : ";
    std::cin >> nom;
    std::cout << "Position : ";
    std::cin >> position;
    std::cout << "Salaire : ";
    std::cin >> salaire;
}
void Personnel::augmenter_salaire(float pourcentage) {
    salaire += salaire * (pourcentage / 100.0);
}
void affiche_externe(Personnel p) {
    std::cout << "Nom : " << p.nom << "\n"
              << "Position : " << p.position << "\n"
              << "Salaire : " << p.salaire << "\n";
}


