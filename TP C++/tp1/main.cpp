#include <iostream>
#include "Ellipse.h"
#include "Cercle.h"



int main() {


    std::cout << "instanciations et constructeurs d'ellipse" << std::endl;
    Ellipse e1;
    Ellipse e2(2.5f, 6.5f, 12.0f, 15.0f);
    Ellipse e3(e1);

    e1.affiche();
    e2.affiche();
    e3.affiche();

    std::cout << "\ntests des methode deplace, zoom et surface" << std::endl;
    e2.deplace(50.0f, 0.0f);
    e2.zoom(1.5f);
    e2.affiche();
    std::cout << "surface de e2 : " << e2.surface() << std::endl;

    std::cout << "\ntest de la classe derive cercle" << std::endl;
    Cercle c(5.0f, 5.0f, 15.0f);
    c.deplace(0.5f, 1.5f);
    c.affiche();

    std::cout << "\ntest du polymorphisme" << std::endl;
    Ellipse* p1 = new Ellipse(0.0f, 0.0f, 8.5f, 10.2f);
    Ellipse* p2 = new Cercle(-2.5f, 2.5f, 7.0f);


    p1->affiche();
    p2->affiche();


    delete p1;
    delete p2;
    



    return 0;
}
