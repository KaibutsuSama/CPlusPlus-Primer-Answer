#include <iostream>

int main() {
    int val1, val2;
    std::cout << "Please enter 2 number" << std::endl;
    std::cin >> val1 >> val2;
    if (val1 > val2) {
        while (val1 >= val2) {
            std::cout << val1 << ", ";
            val1--;
        }
    } else if (val2 > val1) {
        while (val2 >= val1) {
            std::cout << val1 << ", ";
            val1++;
        }
    } else {
        std::cout << "Same number" << std::endl;
    }
    return 0;
}