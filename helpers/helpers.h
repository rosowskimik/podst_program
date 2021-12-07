#ifndef __HELPERS_INPUTS_H
#define __HELPERS_INPUTS_H

#include <functional>
#include <iostream>
#include <string>

namespace h {
    template<typename T>
    void checked_input_to(
            T& target,
            const std::string& input_text,
            const std::string& error_text,
            const std::function<bool(const T&)>& is_wrong) {
        bool not_first = false;
        do {
            if (not_first) {
                std::cout << error_text;
            }
            std::cout << input_text;
            std::cin >> target;

            not_first = true;
        } while (is_wrong(target));
    }
}// namespace h
#endif
