#ifndef PATRON_H
#define PATRON_H

#include "Personnel.h"
#include <string>

class Patron : public Personnel {
private:
    double ba;
    std::string mv;

public:
    Patron();
    Patron(std::string nom, std::string position, float salaire, float bonus, std::string marque);

    float calculer_revenu_annuel() const;
    void saisie_patron();
    void affiche_patron() const;
    void saisie_personnel() override;
    void affiche_personnel() const override;
};

#endif

