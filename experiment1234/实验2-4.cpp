#include<iostream>
using namespace std;
int main() {
	int a, b;
	char c;
	cout << "���������������Ҫ�����������:" << endl;
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
			cout << "����������Ϊ0" << endl;
		else
			cout << a / b << endl; break;
	default:cout << "������Ƿ�" << endl;
		break;
	}
	}return 0;
}
