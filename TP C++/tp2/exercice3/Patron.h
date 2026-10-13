//
// Created by rayen on 10/9/26.
//

#ifndef TP2_PATRON_H
#define TP2_PATRON_H
#include "Personnel.h"
#include <iostream>


class Patron: public Personnel {
    private:
        float ba;
        string mv;
    public:
        Patron(const string &nom, const string &position,const float &salaire, const float &ba, const string &mv);
        Patron();
        void saisie_patron();
        void affiche_patron() const;
};


#endif //TP2_PATRON_H
