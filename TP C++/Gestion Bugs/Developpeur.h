#pragma once
#include <iostream>
using namespace std;

class Developpeur{
    protected:
        string nom;
        int bugsCrees;
        int anneesExperience;
    public: 
        Developpeur(string nom, int anneesExperience);
        virtual ~Developpeur(){};
        virtual void afficher() const;
};
