#include<iostream>
using namespace std;
int  gys(int m, int n) {
	int temp, temp1;
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
int gbs(int m, int n) {
	int temp, temp1;
	if (m < n) {
		temp = m;
		m = n;
		n = temp;
	}
	int i = 1;
	while (n * i % m) {
		i++;
	}
	return n * i;
}
int main() {
	int m, n;
	cout << "������Ȼ��m��n��" << endl;
	cin >> m >> n;
	cout << "m��n�����Լ��Ϊ:" << gys(m, n) << endl;
	cout << "m��n����С������Ϊ:" << gbs(m, n) << endl;
	return 0;
}