#ifndef ELLIPSE_H
#define ELLIPSE_H

class Ellipse {
private:

    float cX, cY;
    float a, b;

public:
    Ellipse();
    Ellipse(float x, float y, float a, float b);
    Ellipse(const Ellipse &e);
    virtual ~Ellipse();


    void deplace(float dx, float dy);
    void zoom(float z);
    float surface();
    virtual void affiche();
};

#endif