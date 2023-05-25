#include <iostream>

int main() {
    // currVal是正在统计的数字，读取的新值存入val
    int currVal = 0, val = 0;
    if (std::cin >> currVal) {
        int cnt = 1;
        while (std::cin >> val) {
            if (val == currVal) {
                cnt++;
            } else {
                std::cout << currVal << " occurs " << cnt << " times " << std::endl;
                currVal = val;
                cnt = 1;
            }
        }
        std:: cout << currVal << " occurs " << cnt << " times" << std::endl;
    }
    return 0;
}