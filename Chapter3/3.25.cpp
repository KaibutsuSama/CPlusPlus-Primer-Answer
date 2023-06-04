#include <vector>
#include <iostream>

using namespace std;

int main(){
    vector<unsigned> scores(11,0);
    unsigned grade;
    while(cin >> grade && grade != -1){
        ++*(scores.begin() + grade / 10);
    }

    for(auto s : scores){
        cout << s << " ";
    }
    return 0;
}