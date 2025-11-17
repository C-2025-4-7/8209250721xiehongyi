#include<iostream>
int main() {
	double x;
	std::cin >> x;
	double y;
	if (0 < x && x < 1) {
		std::cout << "y=" << 3 - 2*x  << std::endl;
	}
	else if (1 <= x && x < 5) {
		std::cout << "y=" << (2.0/(4*x))+1 << std::endl;
	}
	else if (5 <= x && x< 10) {
		std::cout << "y=" << x*x << std::endl;
	}
	else {
		std::cout << "输入的数值不符合规定" << std::endl;
	}
}