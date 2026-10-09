#include "Personne.h"


Personne::Personne() {
    nom = "";
    cin = "";
}

Personne::Personne(string nom, string cin) {
    this->nom = nom;
    this->cin = cin;
}

string Personne::getNom() const {
    return nom;
}

void Personne::afficher() const {
    cout << "Nom : " << nom << endl;
    cout << "cin : " << cin << endl;
}

void Personne::afficher(Personne p) const {
    cout << "Nom : " << p.nom << endl;
    cout << "cin : " << p.cin << endl;
}


Etudiant::Etudiant() : Personne(), numEtud("") {}

Etudiant::Etudiant(string nom, string cin, string numEtud) : Personne(nom, cin) {
    this->numEtud = numEtud;
}

string Etudiant::getNumEtud() const {
    return numEtud;
}

void Etudiant::afficher() const {
    cout << "Num Etudiant : " << numEtud << endl;
    Personne::afficher();
}