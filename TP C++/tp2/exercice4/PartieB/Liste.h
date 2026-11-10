#include <iostream>
#include "Classes.h"
#include <vector>

class ListePersonnel {
    vector<Personnel*> liste;

    public :
        void remplir_liste_personnel() {
            bool cont = true;
            
            while (cont) {
                cout << "Donner le personnel n" << liste.size() + 1 << " : " << endl;

                cout << "Donner le type de personnel (patron/personnel) : ";
                string type;
                cin >> type;

                while (type != "patron" && type != "personnel") {
                    
                    cout << "La response doit etre patron ou personnel !" << endl;
                    cout << "Donner le type de personnel (patron/personnel) : ";
                    cin >> type;
                }

                if(type == "personnel") {
                    Personnel* p = new Personnel();
                    p->saisir_personnel();

                    liste.push_back(p);
                }
                else {
                    Patron* p = new Patron();
                    p->saisir_patron();

                    liste.push_back(p);
                }

                cout << "\nContinuer ? (O/N) : ";
                string answer;
                cin >> answer;
                cout << endl;

                while (answer != "O" && answer != "N") {
                    
                    cout << "La response doit etre O ou N !" << endl;
                    cout << "Continuer ? (O/N) : ";
                    cin >> answer;
                }

                cont = answer == "O";
            }
        }

        void afficher_liste_personne() {
            for (int i = 0; i < liste.size(); i++)
            {
                liste.at(i)->affiche_personnel();
                cout << endl;
            }
        }


        ~ListePersonnel() {
            for (int i = 0; i < liste.size(); i++)
            {
                delete liste.at(i);
            }
        }
};
