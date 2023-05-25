#include <iostream>

void question_9() {
    int sum = 0;
    for (int i = 50; i <= 100; i++) {
        sum += i;
    }
    std::cout << "sum is: " << sum << std::endl;
}

void question_10() {
    for (int i = 10; i >= 0; i--) {
        std::cout << i << ", ";
    }
    std::cout << std::endl;
}

void question_11() {
    int value1, value2;
    std::cout << "Please enter 2 number" << std::endl;
    std::cin >> value1 >> value2;
    if (value1 > value2) {
        for (int i = value2; i <= value1; i++) {
            std::cout << i << ", ";
        }
    } else if (value1 < value2) {
        for (int i = value1; i <= value2; i++) {
            std::cout << i << ", ";
        }
    } else{
        std::cout << "Same number" << std::endl;
    }
}

int main() {
    question_9();
    question_10();
    question_11();
    return 0;
}