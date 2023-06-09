#include <iostream>
#include <string>

using namespace std;

int main() {
    string s1 = "a string", *p = &s1;
    string::size_type n = s1.size();
    n = (*p).size();
    n = p->size();
    return 0;
}
