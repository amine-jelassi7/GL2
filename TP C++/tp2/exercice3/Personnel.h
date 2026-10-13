#ifndef PERSONNEL_H
#define PERSONNEL_H

#include <string>

class Personnel {
protected:
    std::string nom;
    std::string position;
    double salaire;


public:
    Personnel();
    Personnel(std::string nom, std::string position, float salaire);

    void affiche_personnel() const;
    void saisie_personnel();

    void augmenter_salaire(float pourcentage);
    friend void affiche_externe(Personnel p);
};

#endif

