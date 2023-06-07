#include <iostream>
#include <cstring>

int main(){
    char c1[] = {'H','E','L','L','O','\0'};
    char c2[] = {'h','e','l','l','o','\0'};
    char result[11];
    strcat(result,strcat(c1,c2));
    std::cout << result << std::endl;
    return 0;
}