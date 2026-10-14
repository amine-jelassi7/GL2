#include "fraction.h"
#include <cstdlib>
#include <cmath>
#include <iostream>

fraction::fraction() : num(0), den(1) {}

fraction::fraction(int num, int den) {
    if (den == 0) exit(1);
    this->num = num;
    this->den = den;
}

int fraction::get_den() const {
    return den;
}

int fraction::get_num() const {
    return num;
}

void fraction::set_fraction(int num, int den) {
    if (den == 0) exit(1);
    this->num = num;
    this->den = den;
}

fraction fraction::somme(const fraction& autre) const {
    fraction res;
    res.num = (this->num * autre.get_den()) + (autre.get_num() * this->den);
    res.den = autre.get_den() * this->den;
    return res;
}

int get_pgcd(int a, int b) {
    a = std::abs(a);
    b = std::abs(b);
    if (b == 0) return a;
    return get_pgcd(b, a % b);
}

void fraction::simplification() {
    int pgcd = get_pgcd(num, den);
    if (pgcd != 0) {
        this->set_fraction(num / pgcd, den / pgcd);
    }
}

void fraction::afficher () const {
    std::cout << num << "/" << den;
}