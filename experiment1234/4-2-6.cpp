#include<iostream>
#include <cstring> 
#include<cmath>
using namespace std;
int parseHex(const char* const hexString) {
	int len = strlen(hexString);
	int* copy = new int[len];
	int sum = 0;
	for (int i = len - 1; i >= 0; i--) {
		if (hexString[i] >= '0' && hexString[i] <= '9') {
			copy[len - i - 1] = hexString[i] - '0'; 
		}
		else if (hexString[i] >= 'a' && hexString[i] <= 'f') {
			copy[len - i - 1] = hexString[i] - 'a' + 10; 
		}
		else if (hexString[i] >= 'A' && hexString[i] <= 'F') {
			copy[len - i - 1] = hexString[i] - 'A' + 10; 
		}
		else {
			cout << "��������Ƿ��ַ���" << endl;
		}
	}
	for (int k = 0; k < len; k++) {
		sum += copy[k] * pow(16, k);
	}
	delete[]copy;
	return sum;
}
int main() {
	char s[100];
	cout << "����һ��ʮ����������";
	cin >> s;
	int n = parseHex(s);
	cout << "��Ӧ��ʮ������Ϊ��" << n << endl;
}
