#include<iostream>
#include<cmath>
using namespace std;
int main() {
	double x, y, z, m, n;
	x = 0.8;
	for (y = 0, z = 1, m = 2; m <= 100; z++)
	{
		y = y + m;
		m = m * 2;
	}
	n = y * 0.8 / (z - 1);
	cout << "平均每天花费:" << n << "元" << endl;
	return 0;
}
