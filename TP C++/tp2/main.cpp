#include <iostream>
#include "complexe.h"

int main() {
    complexe* nbre1 = new complexe(3, 2);
    complexe* nbre2 = new complexe(4, 2);

    complexe result = nbre1->somme(*nbre2);
    result.afficher();

    delete nbre1;
    delete nbre2;

    return 0;
}