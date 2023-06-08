#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> vec(10, 0);
    bool b = *vec.begin() == *(vec.begin());
    cout << b << endl;

    b = *vec.begin() + 1 == (*vec.begin() + 1);
    cout << b << endl;
    return 0;
}