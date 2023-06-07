#include <iostream>

int main() {
    constexpr int SIZE = 10;
    int arr[SIZE] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int *beg = std::begin(arr);
    int *end = std::end(arr);
    while (beg != end && SIZE != 0) {
        *beg = 0;
        beg++;
    }
    for(auto element : arr){
        std::cout << element << ", ";
    }
    return 0;
}