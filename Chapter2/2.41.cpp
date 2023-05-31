#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;

struct Sales_Data {
    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0;
};

int main() {
    Sales_Data data1, data2;
    double price = 0;
    cin >> data1.bookNo >> data1.units_sold >> price;
    data1.revenue = data1.units_sold * price;

    cin >> data2.bookNo >> data2.units_sold >> price;
    data2.revenue = data2.units_sold * price;

    if (data1.bookNo == data2.bookNo) {
        unsigned totalCnt = data1.units_sold + data2.units_sold;
        double totalRevenue = data1.revenue + data2.revenue;
        cout << data1.bookNo << " " << totalCnt << " " << totalRevenue << endl;
        if(totalRevenue != 0){
            cout << totalRevenue / totalCnt << endl;
        }else{
            cout << "no sales" << endl;
        }
        return 0;
    } else{
        cout << "Data must refer to the same ISBN" << endl;
        return -1;
    }

    return 0;
}
