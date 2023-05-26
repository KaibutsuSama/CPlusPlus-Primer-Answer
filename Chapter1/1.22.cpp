#include "../data/Sales_item.h"
#include <iostream>

int main() {
    Sales_item sum_item;
    std::cin >> sum_item;
    std::cout << sum_item << std::endl;
    for (Sales_item item; std::cin >> item; std::cout << item << std::endl){
        sum_item += item;
    }
    std::cout << "sum of sale items: " << sum_item << std::endl;
    return 0;
}