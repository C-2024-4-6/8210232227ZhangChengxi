#include <iostream>
#define N 5
using namespace std;
class Student {
private:
string num; 
double score;
public:
     Student(string num = "", double score = 0.0) {
     this->num = num, this->score = score;
     }
     string getNum() {
         return num;
     }
     double getScore(){
         return score;
     }
     void set_value(string num, double score) {
                this->num = num;
                this->score = score;
            }
        };
void max(Student* student, int n) {
    if (n <= 0) {
        cout << "û���ҵ����ֵ" << endl;
        return;
    }
    Student* maxStudent = &student[0];
    for (int i = 1; i < n; ++i) {
        if (student[i].getScore() > maxStudent->getScore()) {
            maxStudent = &student[i];
        }
    }
    cout << "ѧ������߳ɼ����ǣ�" << maxStudent->getNum() << endl;
}
int main() {
    Student students[N];
    cout << "������" << N << "��ѧ������Ϣ" << endl;
    for (int i = 0; i < N; i++) {
        string num;
        double score;
        cout << "��" << (i + 1) << "��ѧ����ѧ���ǣ� ";
        cin >>num ;
        cout << "�ɼ��� ";
        cin >> score;
        students[i].set_value(num, score);
    }
    max(students, N);
    return 0;
}
