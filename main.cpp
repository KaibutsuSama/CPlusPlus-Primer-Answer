#include <iostream>
#include <vector>

using namespace std;

int main() {
    string s = "some string";
    string::iterator it;
    it = s.begin();
    cout << *it <<  endl;
    return 0;
}