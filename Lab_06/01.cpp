#include "helpers.h"
#include <array>
#include <cmath>
#include <iomanip>
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

template<size_t len>
using opts = array<const char*, len>;

template<size_t len>
int get_opt(const opts<len>& options, const char* title) {
    int result;
    cout << title << '\n';
    for (int i = 1; i <= len; ++i) {
        cout << '[' << i << "] " << options[i - 1] << '\n';
    }

    cout << "\nProsze wybrac opcje: ";
    cin >> result;
    if (result < 1 || result > len) {
        cerr << "Wybrano bledna opcje.";
        exit(1);
    }
}

void square(int size, bool filled) {
    if (filled) {
        for (int i = 1; i <= size; ++i) {
            for (int j = 1; j <= size; ++j) {
                cout << '*';
            }
            cout << '\n';
        }
    } else {
        for (int i = 1; i <= size; ++i) {
            std::cout << '*';
        }

        for (int i = 1; i < (size - 1); ++i) {
            std::cout << "\n*";
            for (int j = 0; j < (size - 2); ++j) {
                std::cout << ' ';
            }
            std::cout << '*';
        }
        std::cout << '\n';
        if (size > 1) {
            for (int i = 1; i <= size; ++i) {
                std::cout << '*';
            }
        }
    }
}

void draw_square() {
    int size = -1;
    char select = 'a';
    h::checked_input_to<int>(size, "Podaj wartosc N: ", "N musi byc dodatnie\n", [](auto& v) { return v < 1; });
    h::checked_input_to<char>(select, "Czy ksztalt ma byc wypelniony? [Tt - tak, Nn - nie]: ", "\n", [](auto& c) { return string("TtNn").find(c) == string::npos; });

    switch (select) {
        case 't':
        case 'T':
            square(size, true);
            break;
        case 'n':
        case 'N':
            square(size, false);
    }
}

void rect(int n, int m, bool filled) {
    if (filled) {
        if (n > 1 && m > 1) {
            for (int i = 1; i <= n; ++i) {
                for (int j = 1; j <= n; ++j) {
                    cout << '*';
                }
                cout << '\n';
            }
        } else if (n == 1) {
            for (int i = 1; i <= m; ++i) {
                cout << '*';
            }
        } else {
            for (int i = 1; i <= n; ++i) {
                cout << "*\n";
            }
        }

    } else {
        if (n > 1 && m > 1) {
            for (int i = 1; i <= m; ++i) {
                std::cout << '*';
            }

            for (int i = 1; i < (n - 1); ++i) {
                std::cout << "\n*";
                for (int j = 0; j < (m - 2); ++j) {
                    std::cout << ' ';
                }
                std::cout << '*';
            }
            std::cout << '\n';
            if (n > 1) {
                for (int i = 1; i <= m; ++i) {
                    std::cout << '*';
                }
            }
        } else if (n == 1) {
            for (int i = 1; i <= m; ++i) {
                cout << '*';
            }
        } else {
            for (int i = 1; i <= n; ++i) {
                cout << "*\n";
            }
        }
    }
}

void draw_rect() {
    int n = -1, m = -1;
    char select = 'a';

    h::checked_input_to<int>(n, "Podaj wartosc N: ", "N musi byc dodatnie\n", [](auto& v) { return v < 1; });
    h::checked_input_to<int>(m, "Podaj wartosc M: ", "M musi byc dodatnie\n", [](auto& v) { return v < 1; });
    h::checked_input_to<char>(select, "Czy ksztalt ma byc wypelniony? [Tt - tak, Nn - nie]: ", "\n", [](auto& c) { return string("TtNn").find(c) == string::npos; });

    switch (select) {
        case 't':
        case 'T':
            rect(n, m, true);
            break;
        case 'n':
        case 'N':
            rect(n, m, false);
    }
}

void triangle(int base, bool filled, bool mirror) {
    for (int i = 0; i < base; ++i) {
        int space_count = base - i - 1;
        for (int j = 0; j < space_count; ++j) {
            cout << ' ';
        }
        cout << "* ";
        for (int j = 0; j < i - 1; ++j) {
            cout << ((filled || (!mirror && i + 1 == base)) ? "* " : "  ");
        }
        if (i != 0) {
            cout << "*\n";
        } else {
            cout << '\n';
        }
    }
    if (mirror) {
        for (int i = base - 1; i >= 0; --i) {
            if (i == base - 1) continue;
            int space_count = base - i - 1;
            for (int j = 0; j < space_count; ++j) {
                cout << ' ';
            }
            cout << "* ";
            for (int j = 0; j < i - 1; ++j) {
                cout << ((filled || (!mirror && i + 1 == base)) ? "* " : "  ");
            }
            if (i != 0) {
                cout << "*\n";
            } else {
                cout << '\n';
            }
        }
    }
}

void draw_triangle(bool mirror) {
    int base = -1;
    char select = 'a';

    h::checked_input_to<int>(base, "Podaj dlugosc podstawy: ", "Podstawa musi byc dodatnia\n", [](auto& v) { return v < 1; });
    h::checked_input_to<char>(select, "Czy ksztalt ma byc wypelniony? [Tt - tak, Nn - nie]: ", "\n", [](auto& c) { return string("TtNn").find(c) == string::npos; });

    switch (select) {
        case 't':
        case 'T':
            triangle(base, true, mirror);
            break;
        case 'n':
        case 'N':
            triangle(base, false, mirror);
    }
}

string execute_lab_06_01() {
    const opts<4> options = {
            "Kwadrat NxN",
            "Prostokat MxN",
            "Trojkat o podstawie N",
            "Romb o boku N"};

    int result = get_opt(options, "Prosze wybrac figure do narysowania");

    switch (result) {
        case 1:
            draw_square();
            break;
        case 2:
            draw_rect();
            break;
        case 3:
            draw_triangle(false);
            break;
        case 4:
            draw_triangle(true);
            break;
        default:
            cerr << "Something went wrong\n";
            exit(1);
    }

    exit(0);
}

void expand(int width, int base, int begin, string& output) {
    int spaces = width - begin;
    int repeats = base - begin + 1;
    for (int i = 0; i < repeats; ++i) {
        for (int j = 0; j < spaces; ++j) {
            output += ' ';
        }
        for (int j = 0; j < begin; ++j) {
            output += "* ";
        }
        spaces -= 1;
        begin += 1;
        output += '\n';
    }
}

string list_06_02(bool custom_take) {
    int base = -1;
    int take = 1;

    h::checked_input_to<int>(base, "Podaj N: ", "N musi byc wieksze od 5\n", [](const auto& v) { return v < 6; });

    if (custom_take) {
        int max = floor((1.0 / 3.0) * base - 1);
        string err = "X musi byc w zasiegu [-1; ";
        err += to_string(max);
        err += "]\n";
        h::checked_input_to<int>(take, "Podaj X: ", err.c_str(), [&max](const auto& v) { return v < -1 || v > max; });
    }

    string out = "\n\n";

    expand(base, floor((1.0 / 3.0) * static_cast<float>(base)), 1, out);
    expand(base, floor((2.0 / 3.0) * static_cast<float>(base)), floor((1.0 / 3.0) * static_cast<float>(base)) - take, out);
    expand(base, base, floor((2.0 / 3.0) * static_cast<float>(base)) - take, out);

    return out;
}

string executeExercise(int option) {
    switch (option) {
        case 1:
            return execute_lab_05_01();
        case 2:
            return execute_lab_05_02();
        case 3:
            return execute_lab_05_03();
        case 4:
            return execute_lab_06_01();
        case 5:
            return list_06_02(false);
        case 6:
            return list_06_02(true);
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
            "Generator liczb losowych",
            "Generator losowych liter a - z",
            "Generator losowych ciagow znakow",
            "Rysowanie figur z gwiazdek",
            "Rysowanie choinki",
            "Rysowanie choinki v2"};
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
