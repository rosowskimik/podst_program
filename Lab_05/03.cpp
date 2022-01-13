#include "helpers.h"
#include <cmath>
#include <iostream>
#include <random>
#include <sstream>
using namespace std;
// Lab_05

int lab_05_01(int min, int max, bool isSilent = false) {
    int result;
    random_device rd;
    uniform_int_distribution<int> distrib(min, max);

    result = distrib(rd);
    if (!isSilent) {
        cout << "Wylosowano: " << result << "\n\n";
    }
    return result;
}
string execute_lab_05_01() {
    stringstream str;
    string result;
    int min, max;
    h::checked_input_to<int>(min, "Podaj min: ", "Liczba musi byc nieujemna!\n", [](auto& v) { return v < 0; });
    h::checked_input_to<int>(max, "Podaj max: ", "Liczba musi byc nieujemna i wieksza od poprzedniej!\n", [min](auto& v) { return v < 0 || min >= v; });
    str << lab_05_01(min, max);
    str >> result;
    return result;
}
char lab_05_02(char x, char y) {
    char result = static_cast<char>((x < y) ? lab_05_01(x, y, true) : lab_05_01(y, x, true));
    cout << "Wylosowano: " << result << " [" << static_cast<int>(result) << "]\n\n";
    return result;
}
string execute_lab_05_02() {
    string result;
    char x, y;
    h::checked_input_to<char>(x, "Podaj znak poczatkowy: ", "Litera z zakresu [a; z]/[z; a] !\n", [](auto& c) { return c < 'a' || c > 'z'; });
    h::checked_input_to<char>(y, "Podaj znak koncowy: ", "Litera z zakresu [a; z]/[z; a] !\n", [](auto& c) { return c < 'a' || c > 'z'; });
    result += lab_05_02(x, y);
    return result;
}
string lab_05_03(int length) {
    string result;

    for (int i = 0; i < length; ++i) {
        result += static_cast<char>(lab_05_01(33, 126, true));
    }

    return result;
}
string execute_lab_05_03() {
    int length;
    h::checked_input_to<int>(length, "Podaj dlugosc ciagu znakow [1; 256]: ", "Dlugsoc musi znajdowac sie w zakresie od 1 do 256\n", [](auto& l) { return l < 1 || l > 256; });
    return lab_05_03(length);
}

int getOption(const string descriptions[], const int descriptionsCount) {
    int result;
    cout << "Program pozwala na wykonanie roznych funkcji." << endl
         << "Mozliwe opcje to:" << endl
         << "[0] Zakonczenie programu" << endl;
    for (int x = 0; x < descriptionsCount; x++) {
        cout << "[" << x + 1 << "] " << descriptions[x] << endl;
    }
    cout << "Prosze wybrac opcje: ";
    cin >> result;
    return result;
}
string executeExercise(int option) {
    switch (option) {
        case 1:
            return execute_lab_05_01();
        case 2:
            return execute_lab_05_02();
        case 3:
            return execute_lab_05_03();
        default:
            return "Wybrana funkcja nie zostala poprawnie przypisana";
    }
}
void logExercise(int option, const string& description) {
    string result = executeExercise(option);
    static const string line = "-----------------------------------";
    cout << line << endl
         << "#Lab_05_" << (option < 10 ? "0" : "") << option << endl
         << description << endl
         << endl
         << "Wynik: " << result << endl
         << line << endl;
}

int main() {
    static const string descriptions[] = {
            "Przykladowy opis zadania nr 1",
            "Przykladowy opis zadania nr 2",
            "Przykladowy opis zadania nr 3"};
    static const int descriptionsCount = sizeof(descriptions) /
                                         sizeof(descriptions[0]);
    while (true) {
        const int option = getOption(descriptions, descriptionsCount);
        if (option == 0) {
            cout << "Podano 0 - program konczy dzialanie";
            return 0;
        } else {
            logExercise(option, descriptions[option - 1]);
        }
    }
}
