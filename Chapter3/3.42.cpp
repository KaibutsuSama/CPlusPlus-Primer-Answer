#include <iostream>
#include <vector>

int main() {
    std::vector<int> ivec(10, 0);
    int arr[ivec.size()];
    for (size_t i = 0; i < ivec.size(); i++) {
        arr[i] = ivec[i];
    }

    for (const auto &element: arr) {
        std::cout << element << ", ";
    }
    return 0;
}