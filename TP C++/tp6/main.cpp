#include<iostream>
using namespace std;

class Compte {
    double solde;
public:
    Compte(){solde=0;}
    friend void operator+=(Compte&,double);
    friend Compte operator+(Compte&,Compte&);
    Compte operator++();
    Compte operator++(int);
    friend ostream& operator<< (ostream& out,const Compte& T);




    void affiche_compte(){
        cout <<"solde="<<solde<<endl;
    }
};


void operator+=(Compte& c,double d){
    c.solde += d;
}

Compte operator+(Compte& a ,Compte& b){
    Compte c;
    c.solde=a.solde+b.solde;
    return c;
}


Compte Compte::operator++() {
    solde++;
    return (*this);
}

Compte Compte::operator++(int n) {
    Compte temp = *this;
    solde++;
    return temp;
}

ostream& operator<< (ostream& out,const Compte& T) {
    out << "cout Solde: " << T.solde << endl;
    return out;
}



int main(){

    Compte X,Y,Z;
    X.affiche_compte();
    X+=100;
    X.affiche_compte();
    operator+=(Y,30);
    //Y.operator+=(30);
    Y.affiche_compte();

    //operator  +

    Y+=5;
    Z=X+Y;
    Z.affiche_compte();
    cout<<Z;
    Z++;
    cout<<Z;
    Compte C1=Z++;
    Compte C2=++Z;
    cout<<"C1/"<<C1<<endl;
    cout<<"C2/"<<C2<<endl;



}