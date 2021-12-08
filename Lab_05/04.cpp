#include "helpers.h"
#include <algorithm>
#include <iostream>
#include <random>
#include <unordered_set>

int main() {
    int length = -1;
    float sum = 0.0;

    h::checked_input_to<int>(length, "Podaj dlugosc zbioru: ", "Zbior moze zawiearac od 1 do 100 elementow\n", [](auto& v) { return v < 1 || v > 100; });

    std::random_device rd;
    std::uniform_int_distribution<int> distr(0, 99);
    std::unordered_set<int> s(length);
    do {
        s.emplace(distr(rd));
    } while (s.size() < length);

    for (const auto& val : s) {
        std::cout << val << ", ";
        sum += val;
    }

    std::cout << "\nMaksymalna liczba to: " << *std::max_element(s.begin(), s.end());
    std::cout << "\nSrednia wynosi: " << sum / length << std::endl;

    return 0;
}