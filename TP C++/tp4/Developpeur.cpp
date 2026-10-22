//
// Created by amine on 22/10/2026.
//

#include "Developpeur.h"

Developpeur::Developpeur() : nom(""),anneesExperience(0),bugsCrees(0) {}

Developpeur::Developpeur(std::string nom, int annees, int bugsCrees) {
    this->nom = nom;
    this->anneesExperience = annees;
    this->bugsCrees = bugsCrees;
}

Developpeur::~Developpeur() {}

void Developpeur::afficher() const {
    std::cout << "Nom: "<< nom<< std::endl;
    std::cout << "anne d'experience: "<< anneesExperience<< std::endl;
    std::cout << "bugs cree: "<< bugsCrees<< std::endl;
}


