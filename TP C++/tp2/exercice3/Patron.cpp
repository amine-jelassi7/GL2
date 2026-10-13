//
// Created by rayen on 10/9/26.
//

#include "Patron.h"


Patron::Patron(const string &nom, const string &position,const float &salaire, const float &ba, const string &mv) : Personnel(nom, position, salaire), ba(ba), mv(mv){

}

Patron::Patron() {
    saisie_patron();
}

void Patron::saisie_patron(){
    saisie_personnel();
    cout << "===" << endl;
    cout << "bonus annuel: "; cin >> ba; 
    cout << "marque de voiture: "; cin >> mv;
    cout << endl;
}

void Patron::affiche_patron() const{
    cout << "==== patron ====" << endl; 
    affiche_personnel();
    cout << "===============" << endl;
    cout << "bonus annuel: " << ba << endl;
    cout << "marque de voiture: " << mv << endl;
    cout << endl;
}
