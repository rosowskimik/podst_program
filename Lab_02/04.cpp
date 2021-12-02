#include <iostream>

int main() {
    float x = 5.1;
    bool y = false;
    const char Z = 'Z';

    std::cout << "Suma jest rowna: " << static_cast<int>(x + y + Z) << std::endl;

    return 0;
}