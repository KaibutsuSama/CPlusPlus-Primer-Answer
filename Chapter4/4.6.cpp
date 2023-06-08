#include <iostream>
using namespace std;

int main(){
    int number;
    cin >> number;

    if(number % 2 == 0){
        cout << "even number" << endl;
    } else{
        cout << "odd number" << endl;
    }

    return 0;
}