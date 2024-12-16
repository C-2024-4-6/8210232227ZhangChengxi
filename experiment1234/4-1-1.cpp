#include<iostream>
using namespace std;
int pd(int a[],int b[]) {
	bool x;
	int y = 0;
	for (int i = 0; i < 10; i++) {
		x = true;
		for (int j = 0; j < i; j++) {
			if (a[i] == a[j])
				x = false;
		}
		if (x) {
			b[y] = a[i];
			y++;
		}
	}
	for (int k = 0; k < y; k++) {
		cout << b[k] << " ";
	}
	return 0;
}
int main() {
	int a[10];
	int b[10];
	cout << "Enter ten number:";
	for (int i = 0; i < 10; i++) {
		cin >> a[i];
	}
	cout << "The distinct numbers are:";
	pd(a,b);
	return 0;
}