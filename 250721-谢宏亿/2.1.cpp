#include<iostream>
int main() {
	char ch;
	std::cin >> ch;
	if (ch >= 'a' && ch <= 'z') {
		std::cout << (char)(ch - 32) << std::endl;

	}
	else {
		std::cout << (int)(ch + 1) << std::endl;
	}
}