#include<iostream>
using namespace std;
bool OC[100];
int n = 100;
int main() {
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			if (j % i == 0)
				OC[j] = !OC[j];
		}
	}
	cout << "���ŵĹ��ӵĺ����У�";
	for (int i = 1; i <= n; i++) {
		if (OC[i]) {
			cout << i << " ";
		}
	}
	return 0;
}