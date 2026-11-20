#include <iostream>
#include <numeric>
#include <stdexcept>
#include <vector>

// If you use a separate "fraction.h" file, place the fraction class
// declaration/definition there and #include "fraction.h" instead.
class fraction {
private:
    int num;
    int den;

public:
    fraction(int n = 0, int d = 1) : num(n), den(d) {
        if (den == 0) {
            throw std::invalid_argument("Denominator cannot be zero");
        }
        if (den < 0) {
            num = -num;
            den = -den;
        }
    }

    fraction somme(const fraction& other) const {
        return fraction(num * other.den + other.num * den, den * other.den);
    }

    void simplification() {
        if (num == 0) {
            den = 1;
            return;
        }
        int g = std::gcd(num, den);
        num /= g;
        den /= g;
    }

    void afficher() const {
        std::cout << num << "/" << den << std::endl;
    }
};

class Tableau {
private:
    std::vector<int> elements;

public:
    // Constructeur qui initialise le tableau avec un std::vector<int>
    explicit Tableau(const std::vector<int>& elems) : elements(elems) {}

    // Surcharge de l'opérateur [] pour un accès en lecture et écriture
    int& operator[](std::size_t index) {
        return elements.at(index);
    }

    // Surcharge de l'opérateur [] pour un accès en lecture seule
    const int& operator[](std::size_t index) const {
        return elements.at(index);
    }
};

int main() {
    fraction f1(1, 3);
    fraction f2(2, 4);
    fraction f = f1.somme(f2);
    f.simplification();
    f.afficher(); // Affiche 5/6

    // Initialisation d'un tableau avec des valeurs
    Tableau tableau({1, 2, 3, 4, 5});

    // Accès en lecture
    std::cout << "Element a l'index 2 (lecture seule) : "
              << tableau[2] << std::endl;

    // Accès en écriture
    tableau[2] = 10;
    std::cout << "Element a l'index 2 apres modification : "
              << tableau[2] << std::endl;

    return 0;
}