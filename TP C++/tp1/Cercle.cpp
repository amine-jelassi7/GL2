#include <iostream>
#include "cercle.h"

using namespace std;


Cercle::Cercle() : Ellipse() {}


Cercle::Cercle(float x, float y, float diametre) : Ellipse(x, y, diametre, diametre) {}


Cercle::~Cercle() {}


void Cercle::affiche() {
    cout << "Cercle de rayon " << a / 2.0f << " aux coordonnees : (" << cX << ", " << cY << ")" << endl;
}