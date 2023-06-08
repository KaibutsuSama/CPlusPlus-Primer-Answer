#include <iostream>

using namespace std;

int main() {
    int a, b, c, d;
    while (cin >> a >> b >> c >> d && !(a == -1 && b == -1 && c == -1 && d == -1)) {
        if (a > b && b > c && c > d) {
            cout << "a > b > c > d" << endl;
        } else {
            cout << "False" << endl;
        }
    }

    return 0;
}