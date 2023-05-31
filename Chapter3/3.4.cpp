#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

void compareStrings() {
    string str1, str2;
    cin >> str1 >> str2;
    if (str1 == str2) {
        cout << "Same" << endl;
    } else if (str1 > str2) {
        cout << str1 << " > " << str2 << endl;
    } else {
        cout << str1 << " < " << str2 << endl;
    }
}

void compareLength() {
    string str1, str2;
    cin >> str1 >> str2;
    if (str1.length() == str2.length()) {
        cout << "Same" << endl;
    } else if (str1.length() > str2.length()) {
        cout << str1 << "'s length > < " << str2 << "'s length " << endl;
    } else {
        cout << str1 << "'s length < " << str2 << "'s length" << endl;
    }
}

int main() {
//    compareStrings();
    compareLength();
    return 0;
}