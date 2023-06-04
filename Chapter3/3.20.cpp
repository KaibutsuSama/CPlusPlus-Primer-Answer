#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::cin;
using std::vector;

int calculateAdjacentSums() {
    int number;
    vector<int> ivec;
    while (cin >> number && number != -1) {
        ivec.push_back(number);
    }
    if (ivec.size() < 2) {
        cout << "Not enough numbers entered." << endl;
        return -1;
    }
    for (int i = 0; i < ivec.size(); i++) {
        if (i == 0) {
            cout << "Index " << i << " sum is: " << ivec[i] + ivec[i + 1] << endl;
        } else if (i == ivec.size() - 1) {
            cout << "Index " << i << " sum is " << ivec[i] + ivec[i - 1] << endl;
        } else {
            cout << "Index " << i << " sum is " << ivec[i] + ivec[i - 1] + ivec[i + 1] << endl;
        }
    }
    return 0;
}

int calculateFirstLastSum(){
    int number;
    vector<int> ivec;
    while(cin >> number && number != -1){
        ivec.push_back(number);
    }
    cout << "The sum of first and last is: "<< ivec[0] + ivec[ivec.size()-1] << endl;
    return 0;
}

int calculateFirstLastTwoSum(){
    int number;
    vector<int> ivec;
    while(cin >> number && number != -1){
        ivec.push_back(number);
    }
    if (ivec.size() < 2) {
        cout << "Not enough numbers entered." << endl;
        return -1;
    }
    cout << "The sum of first and last is: " << ivec[1] + ivec[ivec.size()-2] << endl;
}

int main() {
//    calculateAdjacentSums();
//    calculateFirstLastSum();
    calculateFirstLastTwoSum();
    return 0;
}
