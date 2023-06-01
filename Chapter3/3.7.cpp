#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;

int main() {
    std::string str;
    std::getline(cin,str);
    for (char c: str) {
        if(c == ' '){
            c = ' ';
        } else{
            c = 'X';
        }
    }

    cout << str << endl;

    return 0;
}