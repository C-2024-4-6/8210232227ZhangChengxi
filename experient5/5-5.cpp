#include <iostream>
using namespace std;
class Point {
private:
    int x, y;

public:
    Point(){
        this->x = 60, this->y = 80;
    }
    void setPoint(int i, int j) {
        x += i;
        y += j;
    }
    void display() {
        cout << "����ֵΪ��(" << x << "," << y << ")" << endl;
    }
};
int main() {
    Point p;
    cout << "��ʼ����ֵΪ";
    p.display();
    int i, j;
    cout << "������������i������������j��";
    cin >> i >> j;
    p.setPoint(i, j);
    cout << "�����޸�Ϊ��";
    p.display();
    return 0;
}
