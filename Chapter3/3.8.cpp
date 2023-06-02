#include <iostream>
#include <string>

void whileLoop() {
    std::string line;
    std::getline(std::cin, line);
    decltype(line.size()) i = 0;
    while (i < line.size()) {
        if (line[i] != ' ') {
            line[i] = 'X';
        }
        i++;
    }
    std::cout << line << std::endl;
    std::cout << "Program end" << std::endl;
}

void forLoop() {
    std::string line;
    std::getline(std::cin, line);
    int length = line.size();
    for (char &c: line) {
        if (c != ' ') {
            c = 'X';
        }
    }
    std::cout << line << std::endl;
    std::cout << "Program end" << std::endl;
}

int main() {
    whileLoop();
//    forLoop();
    return 0;
}