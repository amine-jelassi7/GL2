#include "Patron.h"

int main() {
    Patron patron("Rayen", "Etudiant", 100, 0, "Peugeot 206");
    patron.affiche_patron();
    Patron p2;
    p2.affiche_patron();
    patron.changer_salaire();
    patron.changer_position();
    affiche_externe(patron);
    return 0;
}
