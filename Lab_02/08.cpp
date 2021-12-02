#include <iostream>
#include <iomanip>

int main() {
    float a, b;

    std::cout << "Podaj bok a: ";
    std::cin >> a;

    std::cout << "Podaj bok b: ";
    std::cin >> b;

    std::cout << "Pole wynosi: " << std::setprecision(2) << std::fixed << a * b << '\n';

    return 0;
}