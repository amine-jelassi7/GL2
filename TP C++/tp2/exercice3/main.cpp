#include <iostream>
#include "Personnel.h"
#include "Patron.h"
#include "ListePersonnel.h"

int main() {
    std::cout << "========Personnel========:\n";
    Personnel p("Mohamed", "gerant", 1250);
    p.affiche_personnel();

    std::cout << "========Patron========:\n";

    Patron patron("Amine", "PDG", 2000, 500, "BMW");
    patron.affiche_patron();
    std::cout << "Revenu annuel total du patron = " << patron.calculer_revenu_annuel() << "\n";

    std::cout << "========Liste du personnel========:\n";
    ListePersonnel liste;
    liste.remplir_liste_personnel();
    liste.afficher_liste_personnel();

    return 0;
}

