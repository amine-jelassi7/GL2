#include <iostream>
using namespace std;


class Personnel {
    protected : 
        string nom;
        string position;
        float salaire;
    public :
        Personnel() {
            nom = "";
            position = "";
            salaire = 0;
        }

        Personnel(string nom , string position , float salaire) {
            this->nom = nom;
            this->position = position;
            this->salaire =salaire;
        }

        void saisir_personnel() {
            cout << "Donner le nom : ";
            cin >> nom;
            cout << "Donner la position : ";
            cin >> position;
            cout << "Donner la salaire : ";
            cin >> salaire;
        }

        void affiche_personnel() const {
            cout << "Nom : " << nom << endl;
            cout << "Position : " << position << endl;
            cout << "salaire : " << salaire << endl;
        }

        float get_salaire() {
            return salaire;
        }

        string get_nom() {
            return nom;
        }

        string get_position() {
            return position;
        }

        void set_salaire(float s) {
            salaire = s;
        }

        void set_nom(string n) {
            nom = n;
        }

        void set_position(string p) {
            position = p;
        }

        friend void affiche_externe(Personnel p) {
            cout << "Nom : " << p.nom << endl;
            cout << "Position : " << p.position << endl;
            cout << "salaire : " << p.salaire << endl;
        }
};

class Patron : public Personnel {
    protected : 
        float ba;
        string mv;

    public :
        Patron() : Personnel() , ba(0) , mv("") {}

        Patron(string nom , string position , float salaire , float ba , string mv) : 
                                        Personnel(nom,position,salaire) , ba(ba) , mv(mv) {}
        
        
        void saisir_patron() {
            saisir_personnel();
            cout << "Donner le bonus annuel : ";
            cin >> ba;
            cout << "Donner la marque de voiture : ";
            cin >> mv;
        }

        void affiche_patron() const {
            affiche_personnel();
            cout << "Bonus annuel : " << ba << endl;
            cout << "Marque de voiture : " << mv << endl;
        }

        float get_bonus_annuel() {
            return ba;
        }

        void set_bonus_annuel(float ba) {
            this->ba = ba;
        }

        string get_model_voiture() {
            return mv;
        }

        void set_nom(string mv) {
            this->mv = mv;
        }
};