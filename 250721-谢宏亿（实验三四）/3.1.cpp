#include<iostream>
using namespace std;
int fun1(int a,int b) {
	while (b !=0) {
		int temp = a % b;
		a = b;
		b = temp;
	}
	return a;
}//求最大公因数
void fun2(int a, int b, int& reM, int& reN) {
	int origin_a = a;
	int origin_b = b;
	while (b != 0) {
		int temp = a % b;
		a = b;
		b = temp;
	}
	reM = a;
	reN = origin_a * origin_b / reM;
	
}
int main() {
	int m, n;
	cout << "请输入两个数字" << endl;
	cin >> m >> n;
	cout << "最大公因数:" << fun1(m, n) << endl;
	int reM2, reN2;
	fun2(m, n, reM2, reN2);
	cout << "最大公因数:" << reM2 << endl;
	cout << "最小公倍数:" << reN2 << endl;
	
}