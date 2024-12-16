#include<iostream>
using namespace std;
void merge(const int list1[], int size1, const int list2[], int size2, int list3[]) {
	for (int i = 0; i < size1; i++) {
		list3[i] = list1[i];
	}
	for (int j = 0; j < size2; j++) {
		list3[size1 + j] = list2[j];
	}
	for (int k = 0; k < size1+size2 ; k++) {
		for (int h = 0; h < size1 + size2 - k-1; h++) {
			if (list3[h] > list3[h + 1]) {
				int temp = list3[h];
				list3[h] = list3[h + 1];
				list3[h + 1] = temp;
			}
		}
	}
}

int main() {
	int m, n;
	cout << "Enter list1:";
	cin >> m;
	int* A = new int[m];
	for (int i = 0; i < m; i++) {
		cin >> A[i];

	}
	cout << "Enter list2:";
	cin >> n;
	int* B = new int[n];
	for (int j = 0; j < n; j++) {
		cin >> B[j];
	}
	int* C = new int[m + n];
	merge(A, m, B, n, C);
	cout << "The merged list is ";
		for (int k = 0; k < m + n; k++) {
			cout<<C[k]<<" ";
		}
		delete[]A;
		delete[]B;
		delete[]C;
		return 0;
}