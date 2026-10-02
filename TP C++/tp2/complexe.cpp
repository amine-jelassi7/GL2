#include "complexe.h"
#include <iostream>

complexe::complexe() : re(0), im(0) {}

complexe::complexe(double re, double im) : re(re), im(im) {}

complexe::complexe(const complexe &c) : re(c.re), im(c.im) {}

complexe::~complexe() {}

void complexe::afficher() const {
    if (re == 0 && im == 0) {
        std::cout << "0" << std::endl;
    } else if (re == 0) {
        std::cout << im << "i" << std::endl;
    } else if (im == 0) {
        std::cout << re << std::endl;
    } else if (im < 0) {
        std::cout << "(" << re << " - " << -im << "i)" << std::endl;
    } else {
        std::cout << "(" << re << " + " << im << "i)" << std::endl;
    }
}

complexe complexe::somme(const complexe &num) const {
    return complexe(re + num.re, im + num.im);
}