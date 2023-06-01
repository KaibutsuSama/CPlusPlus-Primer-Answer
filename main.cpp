#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::getline;

int main() {

    const string hexdigits = "0123456789ABCDEF";
    string result;
    string::size_type n;
    while(cin >> n){
        if (n < hexdigits.size()){
            result += hexdigits[n];
        }
        cout << "Your number is: " << result << endl;
    }
    return 0;
}
