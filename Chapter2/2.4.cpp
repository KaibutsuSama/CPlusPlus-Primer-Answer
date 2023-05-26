#include <iostream>

using std::cout;
using std::endl;

int main() {
    unsigned u = 10, u2 = 42;
    std::cout << u2 - u << endl;
    std::cout << u - u2 << endl;

    int i = 10, i2 = 42;
    std::cout << i2 - i << endl;
    std::cout << i - i2 << endl;
    std::cout << i - u << endl;
    std::cout << u - i << endl;
    return 0;
}