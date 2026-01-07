#include<iostream>
using namespace std;
int main() {
	int  num;
	int count_unique=0;
	int unique[10] = { 0 };
	cout << "Enter ten numbers:" << endl;
	for (int i = 0; i < 10; i++) {
		cin >> num;
		bool is_different = true;
		for (int j = 0; j <count_unique; j++) {
			if (num == unique[j]) {
				is_different = false;//是相同的数字
				break;
			}
		}
		if (is_different == true) {
			unique[count_unique] = num;
			count_unique++;
		}
	}
	cout << "The distinct numbers are  ";
	for (int i = 0; i < count_unique; i++) {
		cout << unique[i] << " ";
	}
}