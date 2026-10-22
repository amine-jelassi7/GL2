#include "DeveloppeurJunior.h"
#include "DeveloppeurSenior.h"

int main(){
    DeveloppeurJunior ali = DeveloppeurJunior("Ali", 1, 12);
    DeveloppeurSenior sarra = DeveloppeurSenior("Sarra", 10, 25);
    ali.afficher(); 
    sarra.afficher();
    cout << "=== On applique la methode coder ===" << endl;
    ali.coder();
    sarra.coder();
    cout << "====================================\n" << endl;
    ali.afficher();
    sarra.afficher();
    cout << "== On applique la methode corrigerBug ==" << endl;
    sarra.corrigerBug();
    sarra.afficher();
    return 0; 
}
