#include<iostream>
using namespace std;
void bubble_sort(double list[]) {
	bool changed = true;
	do
	{
		changed = false;
		for (int j = 0; j < 9; j++)
			if (list[j] > list[j + 1])
			{
				double temp = list[j];
				list[j] = list[j + 1];
				list[j + 1] = temp;
				changed = true;
			}
	} while (changed);
}
int main() {
	cout << "请输入一个数组:" << endl;
	double list[10];
	for (int i = 0; i < 10; i++) {
		cin >> list[i];
	}
	bubble_sort(list);
	for (int i = 0; i < 10; i++) {
		cout << list[i] << " ";
	}
}