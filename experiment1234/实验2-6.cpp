#include<iostream>
using namespace std;
int main() {
	int a, b, c, d, e, i;
	cout << "��������������:" << endl;
	cin >> a >> b;
	c = max(a, b);
	for (i = c; i <= a * b; i++) {
		if (i % a == 0 && i % b == 0)
		{
			d = i; break;
		}
	}
	for (i = 1; i <= c; i++) {
		if (a % i == 0 || b % i == 0)
		{
			e = i; break;
		}
	}
	cout << "�������Ϊ:" << e << ",��С������:" << d << endl;
	return 0;
}
