#include<iostream>
using namespace std;
int main() {
	int a = 0, b = 0, c = 0, d = 0, e = 1;
	char f;
	while (e == 1) {
		cin.get(f);
		if (f == '\n')
			break;
		else if (f >= 'a' && f <= 'z' || f >= 'A' && f <= 'z')
			a++;
		else if (f >= '0' && f <= '9')
			b++;
		else if (f == ' ')
			c++;
		else
			d++;
	}
	cout << "Ӣ����ĸ��:" << a << ",�ո���:" << c << ",�����ַ���:" << b << "�����ַ���:" << d << endl;
	return 0;

}
