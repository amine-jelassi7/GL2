#include "DeveloppeurJunior.h"

void DeveloppeurJunior::coder(){
    cout << nom << " : "<< "ca compile sur ma machine !" << endl;
    bugsCrees += 5;
}

void DeveloppeurJunior::afficher() const{
    Developpeur::afficher();
    cout << "heures Sur StackOverflow: " << heuresSurStackOverflow << endl;
    cout << endl;
}


