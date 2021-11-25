#include <iostream>
#include <array>
#include <algorithm>

int main() {
    std::array<int, 2> nums;

    std::cout << "Podaj 2 liczby po spacji: ";
    for (int i = 0; i < 2; ++i) {
        std::cin >> nums[i];
    }

    std::cout << std::max_element(nums.begin(), nums.end()) << std::endl;

    return 0;
}