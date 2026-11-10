#include <iostream>
using namespace std;

#include "Liste.h"


int main() {

    ListePersonnel L;

    cout << "\n-------> Remplisage :" << endl;

    L.remplir_liste_personnel();

    cout << "\n-------> Affichage :" << endl;

    L.afficher_liste_personne();

}