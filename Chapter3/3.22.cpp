#include <iostream>
#include <vector>
#include <string>
#include <cctype>

using namespace std;

int main() {
    vector<string> text;
    text.push_back("aaaaaaaaaa aaaaaaaaa aaaaaa");
    text.push_back("");
    text.push_back("bbbbbbbbbbbbbb bbbbbbbbbbb bbbbbbbbbbbbb");

    for (vector<string>::iterator it = text.begin(); it != text.end() && !it->empty(); ++it) {
        for (auto &c: *it) {
            if (isalpha(c)) c = toupper(c);
        }
    }

    for (vector<string>::value_type it: text) {
        cout << it << endl;
    }
    return 0;
}