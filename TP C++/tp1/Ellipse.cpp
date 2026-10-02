#include <iostream>
#include "Ellipse.h"



Ellipse::Ellipse() {
    cX = 0;
    cY = 0;
    a = 1;
    b = 1;
}


Ellipse::Ellipse(float x, float y, float e, float f) : cX(x), cY(y), a(e), b(f) {}


Ellipse::Ellipse(const Ellipse &e) {
    cX = e.cX;
    cY = e.cY;
    a = e.a;
    b = e.b;
}


Ellipse::~Ellipse() {

}


void Ellipse::deplace(float dx, float dy) {
    cX += dx;
    cY += dy;
}


void Ellipse::zoom(float z) {
    a *= z;
    b *= z;
}


float Ellipse::surface() {
    return 3.14f * a * b / 4.0f;
}

void Ellipse::affiche() {
    std::cout << "Ellipse d'axes : " << a << " et " << b << std::endl;
    std::cout << " de coordonnees : (" << cX << ", " << cY << ")" << std::endl;
}