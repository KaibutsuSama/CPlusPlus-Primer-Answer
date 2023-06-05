#include <iostream>
#include <vector>

using namespace std;

void copy_array() {
    constexpr size_t SIZE = 10;
    int arr[SIZE], arr2[SIZE];
    for (int i = 0; i < SIZE; i++) {
        arr[i] = i;
        arr2[i] = arr[i];
    }

    // 打印arr2的内容
    for (int i = 0; i < SIZE; i++) {
        cout << arr2[i] << " ";
    }
    cout << endl;
}

void create_vector() {
    vector<int> ivec, ivec2;
    for(int i = 0; i < 10; i ++){
        ivec.push_back(i);
        ivec2.push_back(ivec[i]);
    }

    // 打印ivec2的内容
    for(int i = 0; i < ivec2.size(); i++){
        cout << ivec2[i] << " ";
    }
    cout << endl;
}

int main(){
    copy_array();
    create_vector();
    return 0;
}
