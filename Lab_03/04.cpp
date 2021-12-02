#include <iostream>

int main() {
    std::cout << "Tablice prawd:" << std::endl;

    std::cout << "| p | q | p v q |" << std::endl
              << "-----------------" << std::endl
              << "| 1 | 1 |   1   |" << std::endl
              << "| 1 | 0 |   1   |" << std::endl
              << "| 0 | 1 |   1   |" << std::endl
              << "| 0 | 0 |   0   |" << std::endl
              << "-----------------" << std::endl
              << "| p | q | p ^ q |" << std::endl
              << "| 1 | 1 |   1   |" << std::endl
              << "| 1 | 0 |   0   |" << std::endl
              << "| 0 | 1 |   0   |" << std::endl
              << "| 0 | 0 |   0   |" << std::endl
              << "-----------------" << std::endl
              << "| p | q | p => q |" << std::endl
              << "| 1 | 1 |   1    |" << std::endl
              << "| 1 | 0 |   0    |" << std::endl
              << "| 0 | 1 |   1    |" << std::endl
              << "| 0 | 0 |   1    |" << std::endl
              << "------------------" << std::endl
              << "| p | q | p <=> q |" << std::endl
              << "| 1 | 1 |    1    |" << std::endl
              << "| 1 | 0 |    0    |" << std::endl
              << "| 0 | 1 |    0    |" << std::endl
              << "| 0 | 0 |    1    |" << std::endl
              << "-------------------" << std::endl
              << "| p | q | r | p ^ q | r => p | ~(p ^ q) v (r => p)|" << std::endl
              << "| 1 | 1 | 1 |   1   |   1    |          1         |" << std::endl
              << "| 1 | 1 | 0 |   0   |   1    |          1         |" << std::endl
              << "| 1 | 0 | 1 |   0   |   0    |          1         |" << std::endl
              << "| 1 | 0 | 0 |   0   |   1    |          1         |" << std::endl
              << "| 0 | 1 | 1 |   0   |   1    |          1         |" << std::endl
              << "| 0 | 1 | 0 |   0   |   1    |          1         |" << std::endl
              << "| 0 | 0 | 1 |   0   |   0    |          1         |" << std::endl
              << "| 0 | 0 | 0 |   0   |   1    |          1         |" << std::endl
              << "---------------------------------------------------" << std::endl;

    return 0;
}