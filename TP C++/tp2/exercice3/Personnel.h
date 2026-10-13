//
// Created by rayen on 10/9/26.
//

#ifndef TP2_PERSONNEL_H
#define TP2_PERSONNEL_H
#include <iostream>

using namespace std;

class Personnel {
    protected:
        string nom;
        string position;
        float salaire;
    public:
        Personnel();
        Personnel(string nom, string position, float salaire) : nom(nom), position(position), salaire(salaire) {}
        void affiche_personnel() const;
        void saisie_personnel();
        friend void affiche_externe(Personnel personnel);
        void changer_salaire();
        void changer_position();
};


#endif //TP2_PERSONNEL_H
