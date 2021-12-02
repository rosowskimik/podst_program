#include <cmath>
#include <iomanip>
#include <iostream>

int main() {
    int a, b, c;

    std::cout << "Podaj wartosc a dla a*x^2: ";
    std::cin >> a;

    if (a == 0) {
        std::cout << "a nie moze byc rowne zero.";
        return 0;
    }

    std::cout << "Podaj wartosc b dla b*x: ";
    std::cin >> b;

    std::cout << "Podaj wartosc c: ";
    std::cin >> c;

    double delta = std::pow(b, 2) - 4 * a * c;

    if (delta < 0) {
        std::cout << "Delta mniejsza od zera!";
        return 0;
    }

    if (delta != 0) {
        double delta_root = std::sqrt(delta);
        double result1 = ((-1.0 * b) - delta_root) / (2 * a);
        double result2 = ((-1.0 * b) + delta_root) / (2 * a);

        std::cout << std::setprecision(2) << "x1 = " << result1 << "\nx2 = " << result2;
    } else {
        double result = ((-1.0 * b) / (2 * a));
        std::cout << std::setprecision(2) << "x1 = x2 =" << result;
    }

    return 0;
}