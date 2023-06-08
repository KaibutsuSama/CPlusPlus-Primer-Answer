#include <iostream>

using namespace std;

int main() {
    int i = -30 * 3 + 21 / 5; // -86
    int i1 = -30 + 3 * 21 / 5; // -18
    int i2 = 30 / 3 * 21 % 5; // 0;
    int i3 = -30 / 3 * 21 % 4; // -2;

    cout << i << '\n' << i1 << '\n' << i2 << '\n' << i3 << endl;
    return 0;
}