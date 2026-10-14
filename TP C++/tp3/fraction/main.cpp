#include <iostream>
#include "fraction.h"



int main() {

    fraction f1 (1,3);
    fraction f2 (2,4);
    fraction f = (f1.somme(f2));
    f.simplification();
    f.afficher();




    return 0;
}