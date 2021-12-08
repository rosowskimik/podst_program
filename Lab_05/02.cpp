#include <iostream>
#include <sstream>
#include <string>

bool get_input(std::string& input, std::ostringstream& text) {
    while (true) {
        std::cout << text.str();
        std::cin >> input;

        for (char& c : input) {
            c = std::tolower(c);
        }

        if (input == "tak") {
            return true;
        } else if (input == "nie") {
            return false;
        } else {
            std::cout << "Zla odpowiedz\n";
        }
    }
}

int main() {
    std::string input;
    int guess = 50;
    int pool = 50;

    while (true) {
        std::ostringstream text;
        text << "Czy masz " << guess << " lat? [Tak/Nie] ";
        bool response = get_input(input, text);


        if (response) {
            std::cout << "Masz " << guess << " lat!" << std::endl;
            return 0;
        } else {
            std::ostringstream text;
            text << "Czy masz wiecej niz " << guess << " lat? [Tak/Nie] ";
            bool more = get_input(input, text);

            if (pool > 1) {
                pool /= 2;
            }
            if (more) {
                guess += pool;
            } else {
                guess -= pool;
            }
        }
    }
}