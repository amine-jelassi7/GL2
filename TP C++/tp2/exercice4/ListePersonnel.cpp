#include "ListePersonnel.h"
#include <iostream>

using namespace std;

void ListePersonnel::remplir_liste_personnel(){
    bool ok = true;
    while (ok){
        cout << "voulez vous saisir un personnel ou un patron: ";
        string p;
        cin >> p;
        Personnel *pp;
        if (p == "personnel"){
            pp = new Personnel();
        }
        else if (p == "patron"){
            pp = new Patron();
        }
        else{
            cout << "il faut choisir entre (personnel/patron)" << endl;
            continue;
        }
        pp->saisie_personnel();
        liste.push_back(pp);

        char rep;
        do{
            cout << "voulez-vous continuer (O/N)? ";
            cin >> rep;
        }while(rep != 'O' && rep != 'N');
        if (rep == 'N') ok = false;
    }
}

void ListePersonnel::afficher_liste_personnel(){
    for (const auto& p : liste){
        p->affiche_personnel();
    }
}

ListePersonnel::~ListePersonnel(){
    for (auto& p : liste){
        delete p;
    }
    liste.clear();
}
