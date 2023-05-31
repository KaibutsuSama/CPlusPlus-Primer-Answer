#include <iostream>
using std::cout;
using std::endl;

int main(){
    int a = 10;
    int* p1 = &a;
    *p1 = 20;
    cout << *p1 << endl;
    cout << a << endl;

    return 0;
}