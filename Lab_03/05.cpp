#include <cstdint>
#include <iostream>
#include <ranges>

int main() {
    int n;

    std::cout << "Podaj n: ";
    std::cin >> n;

    if (n == 0) {
        std::cout << "Zero";
    } else if (n > 0) {
        std::cout << "Dodatnia";
    } else {
        std::cout << "Ujemna";
    }

    // Na upartego
    switch (n) {
        case 0:
            std::cout << "Zero";
            break;

        default:
            switch ((n >> ((sizeof(int) - 1))) & 1) {
                case 1:
                    std::cout << "Dodatnia";
                    break;

                case 0:
                    std::cout << "Ujemna";
                    break;
            }
            break;
    }


    return 0;
}