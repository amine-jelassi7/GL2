#include "fraction.h"

int main(){
    Fraction f1(3, 4);
    Fraction f2; 
    cout << "f1 numénateur: " << f1.getNum() << endl; 
    cout << "f1 dénominateur: " << f1.getDen() << endl; 
    f1.aff();
    f2.setFraction(72, 32);
    cout << "f2 numénateur: " << f2.getNum() << endl; 
    cout << "f2 dénominateur: " << f2.getDen() << endl; 
    f2.aff();
    cout << "apres simplification" << endl;
    f2.simplifer();
    f2.aff(); 
    cout << "somme f1 + f2" << endl;
    f1.somme(f2);
    f1.aff();
}
