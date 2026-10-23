#ifndef EXERCICE3_LISTEPERSONNEL_H
#define EXERCICE3_LISTEPERSONNEL_H

#include <vector>
#include "Personnel.h"

class ListePersonnel {
private:
    std::vector<Personnel*> liste;

public:
    ListePersonnel();
    ~ListePersonnel();

    ListePersonnel(const ListePersonnel&) = delete;
    ListePersonnel& operator=(const ListePersonnel&) = delete;

    void remplir_liste_personnel();
    void afficher_liste_personnel() const;
};

#endif // EXERCICE3_LISTEPERSONNEL_H
