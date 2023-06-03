#include <iostream>
#include <vector>

using std::vector;

int main() {
    vector<unsigned> scores(11, 0);
    unsigned grade;
    while (std::cin >> grade && grade != -1) {
        if(grade <= 100){
            ++scores[grade / 10];
        }
    }
    return 0;
}