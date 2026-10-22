//
// Created by amine on 22/10/2026.
//




#ifndef TP4_DEVELOPPEURSENIOR_H
#define TP4_DEVELOPPEURSENIOR_H
#include <iostream>
#include "Developpeur.h"


class DeveloppeurSenior : public Developpeur {
private:
    int projetsLivre;

public:
    DeveloppeurSenior();
    DeveloppeurSenior(std::string nom,int annee, int bugs,int projects);
    ~DeveloppeurSenior() override;

    void coder() ;
    void corrigerBug();
    void afficher() const override;
};


#endif //TP4_DEVELOPPEURSENIOR_H
