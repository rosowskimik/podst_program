#include <algorithm>
#include <iostream>

int main() {
    int nums[3];

    std::cout << "Podaj 3 liczby: ";
    for (int i = 0; i < 3; ++i) {
        std::cin >> nums[i];
    }

    std::sort(nums, nums + 3);

    for (int i = 0; i < 3; ++i) {
        std::cout << nums[i] << ',';
    }

    std::cout << std::endl;

    //    if (nums[0] < nums[1] && nums[0] < nums[2]) {
    //        std::cout << nums[0] << ',';
    //
    //        if (nums[1] < nums[2]) {
    //            std::cout << nums[1] << ',' << nums[2];
    //        } else {
    //            std::cout << nums[2] << ',' << nums[1];
    //        }
    //    } else if (nums[1] < nums[2]) {
    //        std::cout << nums[1] << ',';
    //        if (nums[0] < nums[2]) {
    //            std::cout << nums[0] << ',' << nums[2];
    //        } else {
    //            std::cout << nums[2] << ',' << nums[0];
    //        }
    //    } else {
    //        std::cout << nums[2] << ',';
    //        if (nums[0] < nums[1]) {
    //            std::cout << nums[0] << ',' << nums[1];
    //        } else {
    //            std::cout << nums[1] << ',' << nums[0];
    //        }
    //    }


    return 0;
}