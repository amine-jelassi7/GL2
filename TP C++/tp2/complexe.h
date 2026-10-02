#ifndef TP2_COMPLEXE_H
#define TP2_COMPLEXE_H

class complexe {
protected:
    double re;
    double im;

public:
    complexe();
    complexe(double re, double im);
    complexe(const complexe &c);
    virtual ~complexe();

    void afficher() const;
    complexe somme(const complexe &num) const;
};

#endif // TP2_COMPLEXE_H