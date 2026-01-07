#include<iostream>
#include <cstring>
using namespace std;
void count(const char s[], int counts[]) {
	for (int i = 0; i < 26; i++) {
		counts[i] = 0;
	}
	for (int i = 0; i < strlen(s); i++) {
		char c = s[i];
		if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) {

			if (c >= 'A' && c <= 'Z') {
				c = c + 32;
			}
			int index = c - 'a'; 
			counts[index]++;
		}
	}
}
int main() {
	char s[100];
	int counts[26];
	cout << "Enter a string :" << endl;
	cin.getline(s, 100);
	count( s,  counts);
	for (int i = 0; i < 26; i++) {
		if (counts[i] != 0) {
			cout << (char)('a'+i) << ":" << counts[i] << " times" << endl;
		}
	}
}