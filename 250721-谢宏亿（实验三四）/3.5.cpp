#include<iostream>
using namespace std;
int fun(int day) {
	if (day == 10) {
		return 1;
	}
	return (fun(day + 1) + 1) * 2;
	
}
int main() {
	cout << "一共有" << fun(1) << "个" << endl;
}