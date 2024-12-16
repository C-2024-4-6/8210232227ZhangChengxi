#include<iostream>
using namespace std;
int peach(int n) {
	if (n == 1) {
		return 1;
	}
	else {
		return (peach(n - 1) + 1) * 2;
	}
}
int main() {
	cout << "猴子第一天摘了" << peach(10) << "个桃子。";
}