#include<iostream>
#include<cmath>
#define PI 3.1415926535
using namespace std;
int main() {
	double r, h, v;
	cout << "请输入圆锥底的半径：";
	cin >> r;
	cout << "请输入圆锥底的高:";
	cin >> h;
	v = (1.0 / 3.0) * PI * r * r * h;
	printf("圆锥的体积为:%2f\n", v);
	return 0;
}
