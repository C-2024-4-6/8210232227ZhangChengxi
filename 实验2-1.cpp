#include<iostream>
using namespace std;
int main() {
	cout << "输入一个字符:" << endl;
	char a;
	cin >> a;
	if (a >= 'a' && a <= 'z') {
		cout << static_cast<char>('A' + (a - 'a')) << endl;
	}
	else {
		cout << "ASCII码值为:" << static_cast<int>(a + 1) << endl;
	}
	return 0;
}
