#include "DeveloppeurSenior.h"

DeveloppeurSenior::DeveloppeurSenior(string nom, int anneesExperience, int projetsLivres) : Developpeur(nom, anneesExperience), projetsLivres(projetsLivres){

}

void DeveloppeurSenior::coder(){
    bugsCrees++;
    cout << nom << " : " << "Ce n'est pas un bug c'est une fonctionnalité ! " << endl;
}

void DeveloppeurSenior::corrigerBug(){
    bugsCrees--;
}

void DeveloppeurSenior::afficher() const{
    Developpeur::afficher();     
    cout << "projets Livres: " << projetsLivres << endl;
    cout << endl;
}

