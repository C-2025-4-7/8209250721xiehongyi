#include<iostream>
int main() {
	int a, b, c;
	std::cout << "请输入边长" << std::endl;
	std::cin >> a >> b >> c;
	if (a + b > c && a + c > b && b + c > a) {
		if (a == b || a == c || b == c) {
			std::cout << "是等腰三角形" << std::endl;

		}
		else {
			std::cout << "不是等腰三角形" << std::endl;
		}
	}
	else {
		std::cout << "无法构成三角形" << std::endl;
	}
}