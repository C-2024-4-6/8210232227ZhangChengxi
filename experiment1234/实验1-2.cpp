#include<iostream>
#include<cmath>
#define PI 3.1415926535
using namespace std;
int main() {
	double r, h, v;
	cout << "������Բ׶�׵İ뾶��";
	cin >> r;
	cout << "������Բ׶�׵ĸ�:";
	cin >> h;
	v = (1.0 / 3.0) * PI * r * r * h;
	printf("Բ׶�����Ϊ:%2f\n", v);
	return 0;
}
