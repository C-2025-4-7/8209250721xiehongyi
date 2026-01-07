#include<iostream>
using namespace std;
class Student {
private:
	int num;
	int score;
public:
	Student(int num, int score) {
		this->num = num;
		this->score = score;
	}
	int getnum() {
		return num;
	}
	int getscore() {
		return score;
	}
	
};
void MAX(Student* p, int len) {
	int max_score = p->getscore();
	int max_num = p->getnum();
	for (int i = 1; i < len; i++) {

		if ((p + i)->getscore() > max_score) {
			max_num = (p + i)->getnum();
			max_score = (p + i)->getscore();
		}
		
	}
	cout << "最高成绩者" << max_score << '\n';
	cout << "学号为" << max_num << '\n';


}
int main() {
	Student Arr[5] = {
		Student(1001, 85),
		Student(1002, 92),
		Student(1003, 78),
		Student(1004, 98),
		Student(1005, 88)
	};
	int Arrlen = sizeof(Arr) / sizeof(Arr[0]);
	MAX(Arr, Arrlen);
	return 0;
}