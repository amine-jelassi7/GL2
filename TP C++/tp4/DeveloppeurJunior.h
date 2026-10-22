//
// Created by amine on 22/10/2026.
//
#include "Developpeur.h"
#ifndef TP4_DEVELOPPEURJUNIOR_H
#define TP4_DEVELOPPEURJUNIOR_H


class DeveloppeurJunior : public Developpeur{
private:
    int heuresSurStackOverflow;
public:
    DeveloppeurJunior();
    DeveloppeurJunior(std::string nom,int annee,int bugs, int heures);
    ~DeveloppeurJunior() override;

    void coder();
    void afficher() const override;

};


#endif //TP4_DEVELOPPEURJUNIOR_H
