#include <iostream>
#include <vector>

using namespace std;

int main() {
    string text = "abcdefg";
    auto beg = text.begin(), end = text.end();
    auto mid = text.begin() + (end - beg) / 2;

    while (mid != end && *mid != 'a') {
        if ('a' < *mid) {
            end = mid;
        } else {
            beg = end + 1;
        }
        mid = beg + (end - beg) / 2;
    }
    return 0;
}