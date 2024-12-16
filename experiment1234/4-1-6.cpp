#include<iostream>
#include<cstring>
using namespace std;
void count(const char s[], int counts[]) {
	for (int i = 0; i < 26; i++) {
		counts[i] = 0;
	}
	int len = strlen(s);
	for (int j = 0; j < len; j++) {
		for (int k = 0; k < 26; k++) {
			if (s[j] == 'a' + k || s[j] == 'A' + k) {
				counts[k]++;
			}
		}
	}
}
int main() {
	int counts[26];
	char s[100];
	cout << "Enter a string£º";
	cin.getline (s,100);
	count(s, counts);
	for (int i = 0; i < 26; i++) {
		char x = 'a' + i;
		if (counts[i] != 0) {
			cout << x << ": " << counts[i] << " times" << endl;
		}
	}
	return 0;
}