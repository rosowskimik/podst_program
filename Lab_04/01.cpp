#include <iostream>

int main() {
    int n = -1;


    // 20 * w linio
    std::cout << "20 w linii\n";
    for (int i = 0; i < 20; ++i) {
        std::cout << '*';
    }
    std::cout << std::endl;

    // n znaków w linii
    std::cout
            << "n w linii\n";
    do {
        std::cout << std::endl
                  << "Podaj n: ";
        std::cin >> n;
    } while (n < 0);

    for (int i = 0; i < n; ++i) {
        std::cout << '*';
    }
    std::cout << std::endl;

    // od 1 do n
    n = 0;
    std::cout << "od 1 do n\n";
    do {
        std::cout << std::endl
                  << "Podaj n: ";
        std::cin >> n;
    } while (n < 1);
    for (int i = 1; i <= n; ++i) {
        std::cout << i << ", ";
    }
    std::cout << std::endl;

    // od n do 1
    std::cout << "od n do 1\n";
    n = 0;
    do {
        std::cout << std::endl
                  << "Podaj n: ";
        std::cin >> n;
    } while (n < 1);
    for (int i = n; i > 0; --i) {
        std::cout << i << ", ";
    }
    std::cout << std::endl;

    // od 1 do n, co 2
    n = -1;
    std::cout << "od 1 do n, co 2\n";
    do {
        std::cout << std::endl
                  << "Podaj n: ";
        std::cin >> n;
    } while (n < 2);
    for (int i = 2; i < n; i += 2) {
        std::cout << i << ", ";
    }
    std::cout << std::endl;
}