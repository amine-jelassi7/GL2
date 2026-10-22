#include "fraction.h"
#include <numeric>


Fraction::Fraction(): num(0), den(1){};

Fraction::Fraction(const int &num, const int &den){
    if (den == 0){
        cout << "Erreur: dénominateur nulle" << endl;
    }
    this->num = num;
    this->den = den;
}

int Fraction::getDen() const {return den;}
int Fraction::getNum() const {return num;}

void Fraction::setFraction(const int &n, const int &d){
    if (d == 0){
        cout << "Erreur: dénominateur nulle" << endl;
    }
    this->num = n;
    this->den = d;
}

void Fraction::simplifer(){
    int pgcd = gcd(num, den);
    num = num / pgcd; 
    den = den / pgcd;
}

void Fraction::aff() const{
    cout << num << "/" << den << endl; 
}

void Fraction::somme(Fraction fraction){
    num = num * fraction.den +  fraction.num * den; 
    den *= fraction.den;
}
