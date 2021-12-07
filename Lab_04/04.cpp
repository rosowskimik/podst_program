#include <iostream>

#include "helpers.h"

int main() {
    int size = -1;

    h::checked_input_to<int>(size, "Podaj dodatnia dlugosc boku: ", "Zla dlugosc boku\n", [](auto& s) { return s < 1; });

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