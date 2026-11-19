#include "Patron.h"
#include <iostream>

using namespace std;

void test_polymorphisme() {
    const int N = 10;
    Personnel* TabP[N];
    int n = 0;
    char rep = 'O';
    while ((rep == 'O' || rep == 'o') && n < N) {
        char type;
        cout << "type a saisir (p)ersonnel / (b)oss: "; cin >> type;
        Personnel* p;
        if (type == 'b' || type == 'B') 
            p = new Patron();
        else 
            p = new Personnel();
        p->saisie_personnel();
        TabP[n++] = p;
        cout << "voulez-vous continuer (O/N)? "; cin >> rep;
    }
    cout << "\n=== contenu de TabP ===" << endl;
    for (int i = 0; i < n; i++) TabP[i]->affiche_personnel();
    for (int i = 0; i < n; i++) delete TabP[i];
}

int main() {
    Patron patron("Rayen", "Etudiant", 100, 0, "Peugeot 206");
    patron.affiche_personnel();
    Patron p2;
    p2.affiche_personnel();
    patron.changer_salaire();
    patron.changer_position();
    affiche_externe(patron);
    test_polymorphisme();
    return 0;
}
