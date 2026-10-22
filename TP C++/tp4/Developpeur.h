//
// Created by amine on 22/10/2026.
//
#include <iostream>
#include <string>

#ifndef TP4_DEVELOPPEUR_H
#define TP4_DEVELOPPEUR_H


class Developpeur {
protected:
    std::string nom;
    int anneesExperience;
    int bugsCrees;

public:
    Developpeur();
    Developpeur(std::string nom, int annees, int bugsCrees);
    virtual ~Developpeur();

    virtual void afficher() const;


};

#endif //TP4_DEVELOPPEUR_H
