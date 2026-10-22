//
// Created by amine on 22/10/2026.
//

#include "DeveloppeurJunior.h"

#include <utility>

DeveloppeurJunior::DeveloppeurJunior() : Developpeur(),heuresSurStackOverflow(0){}

DeveloppeurJunior::DeveloppeurJunior(std::string nom,int annee,int bugs, int heures): Developpeur(nom,annee,bugs), heuresSurStackOverflow(heures) {}

DeveloppeurJunior::~DeveloppeurJunior() {}

void DeveloppeurJunior::coder () {
    this->bugsCrees +=5;
    std::cout<< "ca compile sur ma machine" << std::endl;
}

void DeveloppeurJunior::afficher() const {
    Developpeur::afficher();
    std::cout<<"heures sur StackOverflow: " << heuresSurStackOverflow<<std::endl;
}

