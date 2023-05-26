#include "../data/Sales_item.h"
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main(){
    Sales_item book1,book2;

    cin >> book1 >> book2;

    if (book1.isbn() == book2.isbn()){
        cout << book1 + book2 << endl;
    } else{
        cout << "Different isbn" << endl;
    }
    return 0;
}