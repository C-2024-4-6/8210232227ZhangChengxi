#include<iostream>
using namespace std;
int main() {
	double x, y, z;
	cout << "���������ε�����:" << endl;
	cin >> x >> y >> z;
	if (x + y <= z || x + z <= y || y + z <= x)
		cout << "������������" << endl;
	else if (x == y || x == z || y == z)
		cout << "���ǵ���������," << "�ܳ�Ϊ:" << x + y + z << endl;
	else
		cout << "�ⲻ�ǵ���������," << "�ܳ�Ϊ:" << x + y + z << endl;
	return 0;
}
