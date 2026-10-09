#ifndef TP3_PERSONNE_H
#define TP3_PERSONNE_H

#include <iostream>
using namespace std;

class Personne {
protected:
    string nom;
    string cin;
public:
    Personne();
    Personne(string nom, string cin);
    string getNom() const;
    virtual void afficher() const;
    virtual void afficher(Personne p) const;
};

class Etudiant : public Personne {
private:
    string numEtud;
public:
    Etudiant();
    Etudiant(string nom, string cin, string numEtud);
    string getNumEtud() const;
    void afficher() const override;
};

#endif //TP3_PERSONNE_H