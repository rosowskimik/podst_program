#include "helpers.h"
#include <iostream>

int main() {
    int n;
    h::checked_input_to<int>(n, "Podaj bok n: ", "Bok musi byc dodatni\n", [](const auto& x) { return x <= 0; });

    for (int i = n; i > 0; --i) {
        for (int j = i; j > 0; --j) {
            std::cout << '*';
        }
        std::cout << std::endl;
    }


    for (int i = 0; i <= n; ++i) {
        for (int j = i; j > 0; --j) {
            std::cout << '*';
        }
        std::cout << std::endl;
    }

    std::cout << std::endl;

    for (int i = 1; i <= n; ++i) {
        for (int j = n - i; j > 0; --j) {
            std::cout << ' ';
        }
        for (int j = 0; j < i; ++j) {
            std::cout << '*';
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;

    for (int i = n; i > 0; --i) {
        for (int j = n - i; j > 0; --j) {
            std::cout << ' ';
        }
        for (int j = 0; j < i; ++j) {
            std::cout << '*';
        }
        std::cout << std::endl;
    }


    return 0;
}