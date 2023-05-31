#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::string;

void concatenateStrings1(){
    string result, s;
    while (cin >> s)
    {
        result += s;
    }
    cout << result << endl;

}

void concatenateStrings2(){
    string result, s;
    while (getline(cin, s) && !s.empty())
    {
        result += s + " ";
    }
    cout << result << endl;

}

int main(){
//    concatenateStrings1();
    concatenateStrings2();
    return 0;
}
