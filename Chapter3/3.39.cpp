#include <iostream>
#include <string>
#include <cstring>
void compareString() {
    std::string str1 = "Hello";
    std::string str2 = "hello";

    if (str1 < str2) {
        std::cout << "str1 < str2" << std::endl;
    } else if (str1 > str2) {
        std::cout << "str1 > str2" << std::endl;
    } else {
        std::cout << "same" << std::endl;
    }
}

void compareCstyle(){
    const char c1[] = {'H','e','l','l','o','\0'};
    const char c2[] = {'h','e','l','l','o','\0'};
    int result = std::strcmp(c1,c2);
    std::cout << result << std::endl;
}

void compareCstyleWithPointer(){
    const char *c1 = "Hello";
    const char *c2 = "hello";
    int result = std::strcmp(c1,c2);
    std::cout << result << std::endl;
}

int main(){
    compareString();
    compareCstyle();
    compareCstyleWithPointer();
    return 0;
}