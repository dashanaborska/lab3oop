#include <iostream>
#include "Dyhotomia_class.h"

int main() {
    Dyhotomia_class* dyh = new Dyhotomia_class();
    dyh->setVolumes(0.4, 1.0); // -> це  доступ до членів класу через вказівник
    dyh->setTolerance(1e-6);

    double x;

    if (dyh->count(x) == 0) {
        std::cout << "Dichotomy method: root x = " << x << std::endl; // Метод дихотомії: корінь x =
    }
    else {
        std::cout << "Dichotomy method: failed to find the root." << std::endl; // Метод дихотомії: не вдалося знайти корінь.
    }

    Newton_class* newton = new Newton_class();
    newton->setVolumes(0.4, 1.0);
    newton->setTolerance(1e-6);

    if (newton->count_newton(x) == 0) {
        std::cout << "Newton's method: root x = " << x << std::endl; // Метод Ньютона: корінь x =
    }
    else {
        std::cout << "Newton's method: failed to find the root." << std::endl; // Метод Ньютона: не вдалося знайти корінь.
    }

    delete dyh;
    delete newton;

    return 0;
}
