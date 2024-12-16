#include<iostream>
using namespace std;
void bubble_Sort(double list[], int n) {
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - 1 - i; ++j) {
            if (list[j] > list[j + 1]) {
                int temp = list[j];
                list[j] = list[j + 1];
                list[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n = 10; 
    double list[10];
    cout << "输入十个数字：" << endl;
    for (int i = 0; i < n; i++) {
        cin >> list[i];
    }
    bubble_Sort(list, n);
    cout << "排序后的结果为:" << endl;
    for (int i = 0; i < n; i++) {
        cout << list[i] << " ";
    }
    cout << endl;
    return 0;
}