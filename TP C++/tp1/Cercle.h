#ifndef CERCLE_H
#define CERCLE_H

#include "ellipse.h"


class Cercle : public Ellipse {
public:
    Cercle();
    Cercle(float x, float y, float diametre);
    virtual ~Cercle();

    void affiche() override;
};

#endif