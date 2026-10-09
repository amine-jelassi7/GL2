#include <iostream>
#include "Personne.h"

using namespace std;

int main() {
    cout << "=== Personne ===" << endl;
    Personne p1("Med Aziz Ayari", "12345678");
    p1.afficher();

    cout << endl;

    cout << "=== Etudiant ===" << endl;
    Etudiant e1("Rayen Mnif", "87654321", "25555");
    e1.afficher();

    cout << endl;

    cout << "=== test heritage ===" << endl;
    Personne* ptr = &e1;
    ptr->afficher();

    return 0;
}