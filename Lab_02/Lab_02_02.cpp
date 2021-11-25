#include <iostream>

int main() {
    float x = 13.5;
    const char CHAR = 'X';

    std::cout << x << std::endl << CHAR << std::endl;

    x = 123.7;
    std::cout << x << std::endl;

    return 0;
}