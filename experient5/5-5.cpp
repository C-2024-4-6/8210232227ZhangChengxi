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
        cout << "坐标值为：(" << x << "," << y << ")" << endl;
    }
};
int main() {
    Point p;
    cout << "初始坐标值为";
    p.display();
    int i, j;
    cout << "将横坐标增加i，纵坐标增加j：";
    cin >> i >> j;
    p.setPoint(i, j);
    cout << "坐标修改为：";
    p.display();
    return 0;
}
