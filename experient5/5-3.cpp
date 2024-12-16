#include<iostream>
#include"5-3.h"
using namespace std;
int main() {
	double length, width, height;
	Cuboid cft;
	for (int i = 0; i < 3; i++) {
		cout << "输入第"<<i+1<<"个长方体的长，宽，高：" << endl;
		cin >> length >> width >> height;
		cft.set_value(length, width, height);
		cout<< "第" << i + 1 << "个长方体的体积是："<<cft.volume() << endl;
		cout << endl;
	}
	return 0;
}