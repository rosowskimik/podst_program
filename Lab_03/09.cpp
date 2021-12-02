#include <iostream>
#include <random>

int main() {
    std::mt19937 generator;

    int result = generator() % 10;
    int input = -1;

    while (true) {
        std::cout << "Podaj liczbe od 0 do 9: ";
        std::cin >> input;

        if (input < 0 || input > 9) {
            std::cout << "niepoprawna liczba\n";
            continue;
        }

        if (input < result) {
            std::cout << "Za malo\n";
        } else if (input > result) {
            std::cout << "Za duzo\n";
        } else {
            std::cout << "Zgadles! Poprawna odpowiedz to: " << result;
            return 0;
        }
    }
}