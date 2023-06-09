#include <vector>
#include <iostream>

int main() {
    std::vector<int> ivec = {
            1, 2, 3, 4, 5, 6, 7, 8, 9, 10
    };

    for (auto &num: ivec) {
        num % 2 != 0 ? std::cout << num << " is a odd value,after times 2 = " << num * 2 << std::endl : std::cout << num
                                                                                                                  << " is not a odd value"
                                                                                                                  << std::endl;
    }

    return 0;
}