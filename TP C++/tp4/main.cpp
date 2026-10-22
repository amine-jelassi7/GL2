#include <iostream>
#include "DeveloppeurJunior.h"
#include "DeveloppeurSenior.h"

int main() {
    DeveloppeurJunior* ali = new DeveloppeurJunior("Ali", 1, 0, 12);
    DeveloppeurSenior* sarra = new DeveloppeurSenior("Sarra", 10, 0, 25);
    std::cout << "#######################################" << std::endl;
    ali->afficher();
    std::cout << std::endl;
    sarra->afficher();
    std::cout << "\n#######################################" << std::endl;
    ali->coder();
    sarra->coder();
    std::cout << "\n##############################################" << std::endl;
    ali->afficher();
    std::cout << std::endl;
    sarra->afficher();
    std::cout << "\n#######################################" << std::endl;
    sarra->corrigerBug();
    sarra->corrigerBug();
    sarra->afficher();
    delete ali;
    delete sarra;
    return 0;
}

