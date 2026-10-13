#ifndef UNTITLED_COMPLEX_H
#define UNTITLED_COMPLEX_H


class Complex {
    protected:
        int rel;
        int im;
    public:
        Complex() {
            rel = 0;
            im = 0;
        }
        Complex(int rel, int im) : rel(rel), im(im) {};
        void aff() const;
        Complex somme(Complex const &z) const;
};


#endif //UNTITLED_COMPLEX_H
