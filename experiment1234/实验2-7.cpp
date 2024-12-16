#include<iostream>
using namespace std;
int main() {
	int a = 5, b = a;
	while (a >= 0) {
		for (; a <= 5; a++)
			cout << "*";
		cout << endl;
		b--;
		a = b;
	}return 0;
}
