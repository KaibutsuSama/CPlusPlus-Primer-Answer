#include <iostream>

int main() {
    constexpr size_t SIZE = 10;
    int arr[SIZE] = {};
    for (int i = 0; i < SIZE; i++) {
        arr[i] = i;
    }
    for(auto element : arr){
        std::cout << element << std::endl;
    }
    return 0;
}