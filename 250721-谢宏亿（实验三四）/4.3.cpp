#include<iostream>
using namespace std;
void change(bool &a) {
	if (a == 0) {
		a = 1;
	}
	else {
		a = 0;
	}
}
int main() {
	bool a[100] = {0};
	
	for (int student=1; student < 100; student++) {
		for (int j = student; j < 100; j += student) {
			change(a[j - 1]);
		}
	}
	for (int i = 0; i < 100; i++) {
		if (a[i]) {
			cout << i+1 << " ";
		}
	}
}