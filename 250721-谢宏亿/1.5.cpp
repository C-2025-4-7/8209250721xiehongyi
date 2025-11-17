#include<iostream>
int main() {
	double F;//华氏温度
	double C;//摄氏度
	std::cout << "请输入华氏温度:" << std::endl;
	std::cin >> F;
	std::cout << "其对应的摄氏度为:" << (F - 32) / 1.8 << "°C" << std::endl;
	return 0;
}