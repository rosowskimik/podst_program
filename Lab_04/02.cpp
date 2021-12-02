#include <iostream>

int main() {
    int input, sum = 0;

    std::cout << "Podaj liczbe n: ";
    std::cin >> input;

    if (input == 0) {
        std::cout << "0";
        return 0;
    }

    if (input <= 0) {
        do {
            sum += input;
            ++input;
        } while (input <= 1);
    } else {
        int counter = 0;
        do {
            sum += counter++;
            counter;
        } while (sum <= counter);
    }
    std::cout << sum;

    return 0;
}