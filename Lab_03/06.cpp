#include <iostream>

const char *units[3][7] = {
        {
                "a1",
                "a2",
                "a3",
                "a4",
                "a5",
                "a6",
                "a7",
        },
        {
                "b1",
                "b2",
                "b3",
                "b4",
                "b5",
                "b6",
                "b7",
        },
        {
                "c1",
                "c2",
                "c3",
                "c4",
                "c5",
                "c6",
                "c7",
        },
};

int main() {
    int choice_type = 0;
    int choice_unit = 0;
    std::cout << "Podaj numer zamku [1: Necropolis, 2: Loch, 3: Zamek]: ";
    std::cin >> choice_type;

    while (choice_type < 1 || choice_type > 3) {
        std::cout << "Zly wybor" << std::endl
                  << "Podaj numer zamku [1: Necropolis, 2: Loch, 3: Zamek]: ";
        std::cin >> choice_type;
    }

    std::cout << "Wybierz poziom jednostki [1-7]: ";
    std::cin >> choice_unit;
    while (choice_unit < 1 || choice_unit > 7) {
        std::cout << "Zly wybor" << std::endl
                  << "Wybierz poziom jednostki [1-7]: ";
        std::cin >> choice_unit;
    }

    std::cout << units[choice_type - 1][choice_unit - 1] << std::endl;


    return 0;
}