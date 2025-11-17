#include<iostream>
#include<iomanip>
#include<cmath>

int main() {
	double a,xn,xn1;
	std::cout << "请输入一个数" << std::endl;
	std::cin >> a;
	

	if (a < 0) {
		xn = -a;
		xn1 = 0.5 * (xn +(-a / xn));
		while (fabs(xn1 - xn) >= 1e-5) {
			xn = xn1;
			xn1 = 0.5 * (xn + ( - a / xn));
		}
		std::cout << std::fixed << std::setprecision(5) << a << "的平方根为:" << xn1<<"i" << std::endl;
	}
	else if(a>0) {

		xn = a;
		xn1 = 0.5 * (xn + a / xn);
		while (fabs(xn1 - xn) >= 1e-5) {
			xn = xn1;
			xn1 = 0.5 * (xn + a / xn);
		}
		std::cout << std::fixed << std::setprecision(5) << a << "的平方根为:" << xn1 << std::endl;
	}
	else {
		std::cout <<  a << "的平方根为:" << 0 << std::endl;
	}
	return 0;
}