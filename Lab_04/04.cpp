#include <iostream>

int main() {
    int size = -1;

    do {
        std::cout << "Podaj dodatnia dlugosc boku: ";
        std::cin >> size;
    } while (size < 1);

    for (int i = 1; i <= size; ++i) {
        std::cout << '*';
    }

    for (int i = 1; i < (size - 1); ++i) {
        std::cout << "\n*";
        for (int j = 0; j < (size - 2); ++j) {
            std::cout << ' ';
        }
        std::cout << '*';
    }
    std::cout << '\n';
    if (size > 1) {
        for (int i = 1; i <= size; ++i) {
            std::cout << '*';
        }
    }

    return 0;
}