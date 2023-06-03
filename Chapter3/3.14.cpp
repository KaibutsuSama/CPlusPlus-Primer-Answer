#include <iostream>
#include <vector>

int main(){
    int number;
    std::vector<int> ivec;
    while(std::cin >> number && number != -1){
        ivec.push_back(number);
    }
    for(int num : ivec){
        std::cout << num << std::endl;
    }
    return 0;
}
