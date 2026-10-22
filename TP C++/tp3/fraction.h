#include <iostream>
using namespace std;

class Fraction{
    protected:
        int num; 
        int den;
    public: 
        Fraction(); 
        Fraction(const int &num, const int &den);
        int getNum() const;
        int getDen() const;
        void setFraction(const int &n, const int &d);
        void simplifer();
        void somme(Fraction fraction); 
        void aff() const;
};
