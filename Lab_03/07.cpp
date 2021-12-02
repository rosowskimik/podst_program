#include <cstdlib>
#include <ctime>
#include <iostream>

int main() {
    std::srand(static_cast<unsigned int>(std::time(0)));
    int number = std::rand() % 7;

    std::cout << "Wylosowano " << number;

    return 0;
}