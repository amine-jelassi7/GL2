#include "Complex.h"
#include <iostream>

using namespace std;

void Complex::aff() const{
    cout << "z = " << rel << " + "  << im << "i" << endl;
}
Complex Complex::somme(Complex const &z) const {
    return Complex(z.rel + rel, z.im + im);
}
