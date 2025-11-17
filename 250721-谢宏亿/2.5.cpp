#include<iostream>
#include<string>
int main() {
	int letterCount = 0, spaceCount = 0, digitCount = 0, otherCount = 0;
	std::string str;
	std::cout << "请输入字符串" << std::endl;
	getline(std::cin, str);
	for (char c : str) {
		if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
			letterCount++;
		}
		else if (c >= '0' && c <= '9') {
			digitCount++;
		}
		else if (c == ' ') {
			spaceCount++;
		}
		else {
			otherCount++;
		}
	}
	std::cout << "字母个数:" << letterCount << std::endl;
	std::cout << "空格个数:" << spaceCount  << std::endl;
	std::cout << "数字个数:" << digitCount << std::endl;
	std::cout << "其他字符个数:" << otherCount << std::endl;
}