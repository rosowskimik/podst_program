#include <iostream>

int main() {
    int nums[2];

    std::cout << "Podaj 2 liczby: ";

    for(int i=0;i<2;++i) {
        std::cin >> nums[i];
    }

    std::cout << nums[0] / nums[1] << '\n';

    return 0;
}