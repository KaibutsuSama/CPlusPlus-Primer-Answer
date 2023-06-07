#include <iostream>
using namespace std;

int main(){
    short svalue = 32767; ++svalue; // -32768
    unsigned uivalue = 0; --uivalue;  // 4294967295
    unsigned short usvalue = 65535; ++usvalue;  // 0

    cout << svalue << endl;
    cout << uivalue << endl;
    cout << usvalue << endl;
    return 0;
}