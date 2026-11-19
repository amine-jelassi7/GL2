//
// Created by rayen on 10/9/26.
//

#ifndef TP2_PERSONNEL_H
#define TP2_PERSONNEL_H
#include <string>

class Personnel {
    protected:
        std::string nom;
        std::string position;
        float salaire;
    public:
        Personnel();
        Personnel(std::string nom, std::string position, float salaire) : nom(nom), position(position), salaire(salaire) {}
        virtual ~Personnel() = default;
        virtual void affiche_personnel() const;
        virtual void saisie_personnel();
        friend void affiche_externe(Personnel personnel);
        friend void test_polymorphisme();
        void changer_salaire();
        void changer_position();
};

#endif //TP2_PERSONNEL_H
