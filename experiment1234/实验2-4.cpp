#include<iostream>
using namespace std;
int main() {
	int a, b;
	char c;
	cout << "请输入运算符和需要运算的两个数:" << endl;
	cin >> c;
	cin >> a >> b;
	switch (c)
	{
	case'+':cout << a + b << endl; break;
	case'-':cout << a - b << endl; break;
	case'*':cout << a * b << endl; break;
	case'%':cout << a % b << endl; break;
	case'/': {
		if (b == 0)
			cout << "被除数不能为0" << endl;
		else
			cout << a / b << endl; break;
	default:cout << "运算符非法" << endl;
		break;
	}
	}return 0;
}
