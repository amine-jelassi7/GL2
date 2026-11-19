//
// Created by rayen on 10/9/26.
//

#include "Patron.h"
#include <iostream>

using namespace std;


Patron::Patron(const string &nom, const string &position, float salaire, float ba, const string &mv) : Personnel(nom, position, salaire), ba(ba), mv(mv){

}

Patron::Patron() : ba(0), mv("") {

}

void Patron::saisie_personnel(){
    Personnel::saisie_personnel();
    cout << "bonus annuel: "; cin >> ba;
    cout << "marque de voiture: "; cin >> mv;
    cout << endl;
}

void Patron::affiche_personnel() const{
    Personnel::affiche_personnel();
    cout << "bonus annuel: " << ba << endl;
    cout << "marque de voiture: " << mv << endl;
    cout << endl;
}
