#include <iostream>

int main() {
    long long n = -1;

    do {
        std::cout << "Podaj dodatnie n: ";
        std::cin >> n;
    } while (n < 1);

    for (int i = (n * -1); i <= n; ++i) {
        std::cout << i << ", ";
    }
    std::cout << std::endl;

    return 0;
}