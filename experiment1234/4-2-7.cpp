#include<iostream>
using namespace std;
void bubble_Sort(int* list, int n) {
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - 1 - i; ++j) {
            if (*(list + j) > *(list + j + 1)) {
                int temp = *(list + j);
                *(list + j) = *(list + j + 1);
                *(list + j + 1) = temp;
            }
        }
    }
}
int main() {
    int n;
    cout << "�����������Ԫ�ظ���: ";
    cin >> n;
    int* list = new int[n];
    cout << "�����������Ԫ��: ";
    for (int i = 0; i < n; i++) {
        cin >> *(list + i);
    }
    for (int i = 0; i < n; i++) {
        cout << "ָ���ַ: " << (list + i) << " ��Ӧָ�������: " << *(list + i) << endl;
    }
    bubble_Sort(list, n);
    cout << "����������: ";
    for (int i = 0; i < n; i++) {
        cout << *(list + i) << " ";
    }
    cout << endl;
    for (int i = 0; i < n; i++) {
        cout << "ָ���ַ: " << (list + i) << " ��Ӧָ�������: " << *(list + i) << endl;
    }
    delete[] list;
    return 0;
}