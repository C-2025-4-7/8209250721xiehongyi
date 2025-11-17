#include<iostream>

int main() {
	const double PI = 3.14;
	double r, h;
	std::cout << "请分别输入半径和锥高" << std::endl;
	std::cin >> r >> h;
	std::cout << "圆锥的体积为:" << PI * r * r * h / 3 << std::endl;
}