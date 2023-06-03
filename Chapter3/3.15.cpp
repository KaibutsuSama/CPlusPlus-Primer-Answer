#include <iostream>
#include <vector>
#include <string>

int main() {
    std::string str;
    std::vector<std::string> svec;
    while (std::cin >> str && str != "quit") {
        svec.push_back(str);
    }
    for (std::string word: svec) {
        std::cout << word << std::endl;
    }

    return 0;
}
