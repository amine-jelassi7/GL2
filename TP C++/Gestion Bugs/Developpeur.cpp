#include "Developpeur.h"

Developpeur::Developpeur(string nom, int anneesExperience) : nom(nom), anneesExperience(anneesExperience), bugsCrees(0){

}

void Developpeur::afficher() const{
    cout << "nom: " << nom << endl;
    cout << "bugs Crees: " << bugsCrees << endl;
    cout << "annees Experience: " << anneesExperience << endl;
}
