#include<iostream>
using namespace std;
class Time             // 定义Time类
{
private:              // 数据成员为公用的
	int hour;
	int minute;
	int sec;
public:
	void SetTime() {
		cin >> hour >> minute >> sec;
		this->hour = hour, this->minute = minute, this->sec = sec;
	}
	void ShowTime() {
		cout << hour << ":" << minute << ":" << sec << endl;
	}
};
int main()
{
	Time t1;           //定义t1为Time类对象
	
	t1.SetTime();
	t1.ShowTime();
	return 0;
}