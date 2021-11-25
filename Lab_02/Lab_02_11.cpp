#include <iostream>

int main() {
    float a,b;
    char op;

    std::cout << "Podaj wartosc A:\n";
    std::cin >> a;

    std::cout << "Podaj wartosc B:\n";
    std::cin >> b;

    std::cout << "Wybierz operacje [+, -, *, /]\n";
    std::cin >> op;

    switch (op) {
        case '+':
            std::cout << "Wynik: " << a + b;
            break;
        case '-':
            std::cout << "Wynik: " << a - b;
            break;
        case '*':
            std::cout << "Wynik: " << a * b;
            break;
        case '/':
            std::cout << "Wynik: " << a / b;
            break;
        default:
            std::cout << "Zla operacja";
    }

    std::cout << std::endl;

    return 0;
}