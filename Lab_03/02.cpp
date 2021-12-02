#define _USE_MATH_DEFINES
#include <cmath>
#include <iostream>

// const double PI = 3.14;

int main() {
    double d, r, h;

    std::cout << "Podaj średnicę podstawy: ";
    std::cin >> d;
    r = d / 2;

    std::cout << "Podaj wysokość: ";
    std::cin >> h;

    std::cout << "Objętość wynosi: " << (1.0 / 3.0) * M_PI * r * r * h;
}
