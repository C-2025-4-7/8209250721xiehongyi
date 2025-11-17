#include<iostream>
int main() {
	int a, b;
	std::cout << "请输入两个正整数" << std::endl;
	std::cin >> a >> b;
	int minnum = (a < b) ? a : b;
	int maxGCD = 0;//最大公因数
	
	
	for (int i = 1; i <= minnum; i += 1) {
		if (a % i == 0 && b % i == 0) {
			maxGCD = i;
		}
	}

	std::cout << "最大公约数为" << maxGCD << std::endl;
	std::cout << "最小公倍数为" << a * b / maxGCD << std::endl;
}