#include<iostream>
#include"5-3.h"
using namespace std;
int main() {
	double length, width, height;
	Cuboid cft;
	for (int i = 0; i < 3; i++) {
		cout << "�����"<<i+1<<"��������ĳ������ߣ�" << endl;
		cin >> length >> width >> height;
		cft.set_value(length, width, height);
		cout<< "��" << i + 1 << "�������������ǣ�"<<cft.volume() << endl;
		cout << endl;
	}
	return 0;
}