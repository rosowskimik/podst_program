#include <iostream>

double first(double a, double b, double c, double d) {
    double result;

    return result;
}
double second(double a, double b, double c, double d) {
    double result;

    return result;
}
double third(double a, double b, double c, double d) {
    double result;

    return result;
}
double fourth(double a, double b, double c, double d) {
    double result;

    return result;
}

int main() {
    double a, b, c, d, result;
    int choice = 0;

    std::cout << "Podaj wartosci a b c d po spacji: ";
    std::cin >> a >> b >> c >> d;

    while (choice < 1 || choice > 4) {
        std::cout << "Podaj numer wzoru [1-4]: ";
        std::cin >> choice;
        std::cout << std::endl;
    }

    switch (choice) {
        case 1:
            result = (a * b) / (b + a);
            break;
        case 2:
            result = (a + b) / ((a / d) - d);
            break;
        case 3:
            result = ((a - b) / ((b / c) + d)) + (1 / a);
            break;
        case 4:
            result = ((a + (c / d) / ((b / c) + d)) - ((d + 1) / (1 - (a / b))) * (c * -1));
            break;
    }

    std::cout << "Wynik rownania " << choice << " wynosi: " << result;


    return 0;
}