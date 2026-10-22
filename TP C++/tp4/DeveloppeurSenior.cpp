//
// Created by amine on 22/10/2026.
//

#include "DeveloppeurSenior.h"


DeveloppeurSenior::DeveloppeurSenior(): Developpeur(), projetsLivre(0) {}

DeveloppeurSenior::DeveloppeurSenior(std::string nom, int annee, int bugs, int projects) : Developpeur(nom,annee,bugs) , projetsLivre(projects) {}

DeveloppeurSenior::~DeveloppeurSenior() {}

void DeveloppeurSenior::coder () {
    this->bugsCrees +=1;
    std::cout<<"ce n est pas un bug c est une fonctionnalite" << std::endl;
}

void DeveloppeurSenior::corrigerBug () {
    if (this->bugsCrees ==0) return;
    this->bugsCrees -=1;
}

void DeveloppeurSenior::afficher () const {
    Developpeur::afficher();
    std::cout << "project livre: " << projetsLivre << std::endl;

}

