#include<iostream>
using namespace std;
int main() {
	cout << "����һ���ַ�:" << endl;
	char a;
	cin >> a;
	if (a >= 'a' && a <= 'z') {
		cout << static_cast<char>('A' + (a - 'a')) << endl;
	}
	else {
		cout << "ASCII��ֵΪ:" << static_cast<int>(a + 1) << endl;
	}
	return 0;
}
