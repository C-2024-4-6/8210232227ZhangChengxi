#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main() {
	float a, b;
	cout << "�����뻪���¶�:";
	cin >> a;
	b = (a - 32.0) * (5.0 / 9.0);
	std::cout << std::fixed << std::setprecision(2) << b << std::endl;
	return 0;
}
