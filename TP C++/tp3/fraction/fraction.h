#ifndef FRACTION_FRACTION_H
#define FRACTION_FRACTION_H

class fraction {
private:
    int num;
    int den;

public:
    fraction();
    fraction(int num, int den);

    int get_num() const;
    int get_den() const;

    void set_fraction(int num, int den);
    void simplification();
    fraction somme(const fraction& autre) const;
    void afficher() const;
};

#endif // FRACTION_FRACTION_H