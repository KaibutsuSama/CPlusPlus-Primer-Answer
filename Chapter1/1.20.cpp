#include <iostream>
#include "../data/Sales_item.h"

using std::cout;
using std::cin;
using std::endl;

int main() {
    Sales_item book;
    for (Sales_item book; cin >> book; cout << book << std::endl);
    return 0;
}
