#include <iostream>

#define size_of_var(type) "sizeof type " << #type << " is: " << sizeof(type)

int main() {
    std::cout << size_of_var(short)
              << size_of_var(int)
              << size_of_var(long)
              << size_of_var(short int)
              << size_of_var(long long);

    return 0;
}