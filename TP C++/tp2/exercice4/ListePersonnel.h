#ifndef TP2_LISTEPERSONNEL_H
#define TP2_LISTEPERSONNEL_H
#include "Patron.h"
#include <vector>

class ListePersonnel{
    protected:
        std::vector<Personnel*> liste;
    public:
        ListePersonnel() = default;
        virtual ~ListePersonnel();
        ListePersonnel(const ListePersonnel&) = delete;             // owns raw pointers
        ListePersonnel& operator=(const ListePersonnel&) = delete;
        void remplir_liste_personnel();
        void afficher_liste_personnel();

};

#endif //TP2_LISTEPERSONNEL_H
