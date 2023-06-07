#include<iostream>
#include<vector>

int main() {
    int arr[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    std::vector<int> ivec(std::begin(arr), std::end(arr));
    for (std::vector<int>::value_type i: ivec) {
        std::cout << i << ", ";
    }
    return 0;
}