#include<iostream>
#include <cstring> 
using namespace std;
int indexof(const char* s1, const char* s2) {
    int len1 = strlen(s1);
    int len2 = strlen(s2);
    if (len1 == 0 || len2 == 0 || len1 > len2) {
        return -1;
    }
    for (int i = 0; i <= len2 - len1; i++) {
        bool match = true;
        for (int j = 0; j < len1; j++) {
            if (s2[i + j] != s1[j]) {
                match = false;
                break;
            }
        }
        if (match) {
            return i;
        }
    }
    return -1;
}
int main() {
    const int MAX = 100;
    char s1[MAX], s2[MAX];
    cout << "Enter the first string: ";
    cin.getline(s1, MAX);
    cout << "Enter the second string: ";
    cin.getline(s2, MAX);
    int index = indexof(s1, s2);
    if (index != -1) {
        cout << "indexOf(¡°" << s1 << "¡±, ¡°" << s2 << "¡±) is  " << index << endl;
    }
    else {
        cout << "indexOf(¡°" << s1 << "¡±, ¡°" << s2 << "¡±) is   -1" << endl;
    }

    return 0;
}