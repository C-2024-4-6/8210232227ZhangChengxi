#include<iostream>
using namespace std;
int  gys(int m, int n) {
	int temp,temp1;
	if (m < n) {
		temp = m;
		m = n;
		n = temp;
	}
	while (n != 0) {
		temp1 = n;
		n = m % n;
		m = temp1;
	}
	return m;
}
int main() {
	int m, n;
	cout << "输入自然数m和n：" << endl;
	cin >> m >> n;
	cout << "m和n的最大公约数为:" << gys(m, n) << endl;
	return 0;
}