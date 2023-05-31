#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::getline;
int main() {

    string s1 = "hello",s2 = "world";
    string s3 = s1 + ", " + s2 + '\n';
    string s4 = s1 + ", ";
//    string s5 = "hello" + ", "; 错误
    string s6 = s1 + "hello"+ ", ";
//    string s7 = "hello" + "," + s2;

    return 0;
}
