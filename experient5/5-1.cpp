#include<iostream> 
using namespace std;
class Time// ���� Time �� 
{
private:
	// ���ݳ�ԱΪ˽�е�
	int hour;
	int minute;
	int sec;
public:
	
	void Set() {
		int Hour;
		cin >> Hour;
		hour = Hour;
		int Minute;
		cin >> Minute;
		minute = Minute;
		int Sec;
		cin >> Sec;
		sec = Sec;
	}
	void Cout() {
		cout << hour << "��" << minute << "��" << sec << endl;
	}
};
int main()
{
	Time t1;
	//���� t1 Ϊ Time ����� 
	//�����趨��ʱ�� 
	t1.Set();
	t1.Cout();
	return 0;
}