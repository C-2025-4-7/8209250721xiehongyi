#include<iostream>
#include <cstring>
using namespace std;
int indexOf(const char s1[], const char s2[]) {
	int len1 = strlen(s1);
	int len2 = strlen(s2);
	if (len1 > len2) {
		return -1;
	}
	if (len1 == 0) {
		return 0;
	}
	for (int i = 0; i <= len2 - len1; i++) {
		bool is_match = true;
		for (int j = 0; j < len1; j++) {
			if (s1[j] != s2[i + j]) {
				is_match = false;
				break;
			}
		}
		if (is_match) {
			return i;
		}
	}
	return -1;
}
int main(){
	const int MAX_LEN = 100; 
	char s1[MAX_LEN], s2[MAX_LEN];
	cout << "请输入子串s1：";
	cin.getline(s1, MAX_LEN);
	cout << "请输入主串s2：";
	cin.getline(s2, MAX_LEN);
	int result = indexOf(s1, s2);
	if (result == -1) {
		cout << "s1不是s2的子串，返回值：" << result << endl;
	}
	else {
		cout << "s1是s2的子串，起始下标为：" << result << endl;
	}
	return 0;
}