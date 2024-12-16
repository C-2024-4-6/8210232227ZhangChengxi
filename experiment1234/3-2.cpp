#include<iostream>
using namespace std;
bool is_prime(int num) {
	if (num <= 1 ) {
		return false;
	}
	if (num <= 3) {
		return true;
	}
	if (num % 2 == 0 || num % 3 == 0) {
		return false;
	}
	for (int i = 5; i * i <= num; i += 6) {
		if (num % i == 0 || num % (i + 2) == 0) {
			return false;
		}
	}
	return true;
}
int main() {
	int i = 1;
	int j = 2;
	while (i <= 200) {
		while (is_prime(j)) {
			cout << j << " ";
			if (i % 10 == 0) {
				cout << endl;
			}
			i++;
			j++;
		}
		j++;
	}
}