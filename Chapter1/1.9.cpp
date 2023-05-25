#include <iostream>

int main(){
    int sum = 0,value = 50;
    while(value <= 100){
        sum += value;
        value++;
    }
    std::cout << "The sum is: " << sum << std::endl;

    return 0;
}