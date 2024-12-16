#include<iostream>
#include<cmath>
using namespace std;
int main() {
	double a, x, y, z;
	z = 1;
	cout << "请输入一个数:" << endl;
	cin >> a;
	if (a >= 0) {
		for (x = 1; z >= pow(10, -5);) {
			y = (1.0 / 2.0) * (x + a / x);
			z = abs(y - x);
			x = y;
		}
		cout << "平方根为:" << x << endl;
	}
	else {
		a = 0 - a;
		for (x = 1; z >= pow(10, -5);) {
			y = (1.0 / 2.0) * (x + a / x);
			z = abs(y - x);
			x = y;
		}
		cout << "平方根为:" << x << "i" << endl;
	}
}
