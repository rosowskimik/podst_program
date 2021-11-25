#include <iostream>

int main() {
    int x;

    std::cout << "Podaj liczbe: ";
    std::cin >> x;

    std::cout << (x < 0 ? x * -1 : x) << std::endl;

    return 0;
}