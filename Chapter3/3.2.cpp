#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::getline;

/**
* Read line
*/
void readLine() {
    string line;
    while (getline(cin, line)) {
        cout << line << endl;
    }
}

/**
* Read word;
*/
void readWord() {
    string word;
    cin >> word;
    cout << word << endl;
}

int main(){
//    readLine();
    readWord();
    return 0;
}