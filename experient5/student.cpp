#include<iostream>
#include "student.h"
using namespace std;
void Student::display() {
	cout << "num£º"<<num<<endl;
	cout << "name£º"<<name<<endl;
	cout << "sex£º"<<sex<<endl;
}
void Student::set_value(int n,const char*m,char s){
	num = n;
	int i = 0;
	while (m[i] != '\0')
	{
		name[i] = m[i];
		i++;
	}
	name[i] = '\0';
	sex = s;

}