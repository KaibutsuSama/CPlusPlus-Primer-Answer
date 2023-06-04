#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::endl;
using std::cin;
using std::vector;
using std::string;

int main() {
    string words;
    vector<string> svec;
    while (cin >> words && words != "quit") {
        svec.push_back(words);
    }

    for (auto &word: svec) {
        for(char &c : word){
            c = toupper(c);
        }
    }

    for (auto word : svec){
        cout << word << endl;
    }
    return 0;
}