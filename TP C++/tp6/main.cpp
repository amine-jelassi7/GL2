#include<iostream>
using namespace std;

class Compte {
    double solde;
public:
    // etc.
    // surcharge de l'opérateur +=
    Compte(){solde=0;}
    friend void operator+=(Compte&,double);
    friend Compte operator+(Compte&,Compte&);
    Compte operator++();
    Compte operator++(int);
    friend ostream& operator<< (ostream& out,const Compte& T);


    //fonctions membres:
    /*
    void operator+=(double);
    Compte operator+(Compte&);
    */

    void affiche_compte(){
        cout <<"solde="<<solde<<endl;
    }
};

// L’opérateur += a été déclaré « friend » afin
// de lui permettre d’accéder aux données « private»
// de la classe « Compte ».

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

//fonction membres:

/*
void Compte::operator+=(double d){
    solde += d;
}

Compte Compte::operator+(Compte& b){
    Compte c;
    c.solde=solde+b.solde;
    return c;
}
*/

// « X » est une instance de « Compte », les deux
// appels suivants sont équivalents




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