#include <iostream>

#include "Complex.h"

using namespace std;

void lireComplex(int &rel, int &im) {
    cout << "Enter la partie réelle: " ;
    cin >> rel;
    cout << "Enter la partie imaginaire: ";
    cin >> im;
}

int main() {
    int im1, im2, rel1, rel2;
    cout << "Premier nombre" << endl;
    lireComplex(rel1, im1);
    Complex complex(rel1,im1);
    complex.aff();
    cout << "Deuxieme Complex" << endl;
    lireComplex(rel2, im2);
    Complex z(rel2,im2);
    complex.somme(z).aff();

    return 0;
}
