#include<iostream> 
using namespace std;
class Time// 定义 Time 类 
{
private:
	// 数据成员为私有的
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
		cout << hour << "：" << minute << "：" << sec << endl;
	}
};
int main()
{
	Time t1;
	//定义 t1 为 Time 类对象 
	//输入设定的时间 
	t1.Set();
	t1.Cout();
	return 0;
}