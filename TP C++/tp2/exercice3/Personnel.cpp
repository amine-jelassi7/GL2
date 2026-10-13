//
// Created by rayen on 10/9/26.
//

#include "Personnel.h"


void Personnel::affiche_personnel() const {
    cout << "== personnel ==" << endl; 
    cout << "nom: " << nom << endl;
    cout << "post: " << position << endl;
    cout << "salaire: " << salaire << endl;
}

Personnel::Personnel(): nom(""), position(""), salaire(0.0){
    
}

void Personnel::saisie_personnel(){
    cout << "nom: "; cin >> nom;
    cout << "post: "; cin >> position;
    cout << "salaire: "; cin >> salaire;
}

void affiche_externe(Personnel p){
    p.affiche_personnel();
    cout << endl;
}

void Personnel::changer_salaire(){
    cout << "nv salaire de "<< nom << " (" << position << "): "; cin >> salaire;
}

void Personnel::changer_position(){
    cout << "nv position de "<< nom << " (" << position << "): "; cin >> position;
}
