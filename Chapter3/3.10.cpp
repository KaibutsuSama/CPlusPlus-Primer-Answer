#include <iostream>
using namespace std;

int main(){
    string line,result;
    getline(cin,line);
    for(char &c : line){
        if(!ispunct(c)){
            result += c;
        }
    }
    cout << result << endl;
    return 0;
}