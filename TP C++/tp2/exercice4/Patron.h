//
// Created by rayen on 10/9/26.
//

#ifndef TP2_PATRON_H
#define TP2_PATRON_H
#include "Personnel.h"


class Patron: public Personnel {
    private:
        float ba;
        std::string mv;
    public:
        Patron(const std::string &nom, const std::string &position, float salaire, float ba, const std::string &mv);
        Patron();
        void saisie_personnel() override;
        void affiche_personnel() const override;
};


#endif //TP2_PATRON_H
