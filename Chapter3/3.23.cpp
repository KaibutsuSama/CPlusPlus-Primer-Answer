#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> ivec(10, 10);
    for (vector<int>::iterator it = ivec.begin(); it != ivec.end() && !ivec.empty(); it++) {
        *it *= 2;
    }
    for(const int& number : ivec){
        cout << number << " ";
    }

    return 0;
}